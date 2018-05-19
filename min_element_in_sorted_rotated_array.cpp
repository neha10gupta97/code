// Method1- Linear serach 0(n):
//   search for smallest number in array

// Method2 -BinarySearch
#include<bits/stdc++.h>
using namespace std;

int minelement(vector<int>&arr, int n){
  int l=0,h=n-1;
  while(h>=l){
    int m=(l+h)/2;
    if(l==h)
      return arr[l];
    if(m>0&&m<n-1){
      if(arr[m-1]>arr[m]&&arr[m+1]>arr[m])
        return arr[m];
    }
    if(arr[m]<arr[h])
      h=m-1;
    else
      l=m+1;
  }
  return -1;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int rc = minelement(arr,n);
  cout<<"Min element: "<<rc<<endl;
}
