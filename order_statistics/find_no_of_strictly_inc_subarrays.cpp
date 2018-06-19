#include<bits/stdc++.h>
using namespace std;

//inc array of len l gives l*(l-1)/2 subarrays

int maxIncSubarray(vector<int>arr,int n){
  int i=1;
  int count = 0,l=0;
  while(i<n){
    while(i<n && arr[i]>arr[i-1])
      i++;
    count += (i-l)*(i-l-1)/2;
    l=i;
    if(i<n&&arr[i]<arr[i-1])
      i++;
  }
  return count;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int x=maxIncSubarray(arr,n);
  cout<<"Max no of strictly inc subarray: "<<x<<endl;
}
