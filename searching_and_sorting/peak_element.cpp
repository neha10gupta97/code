#include<bits/stdc++.h>
using namespace std;

int peak(vector<int>arr,int l,int h){
  if(l==h)
    return l;
  int m = (l+h)/2;
  if(m>l && m<h && arr[m]>arr[m-1] && arr[m]>arr[m+1])
    return m;
  else if(m>l && arr[m]<arr[m-1]){
    return peak(arr,l,m-1);
  }
  else if(m<h && arr[m]<arr[m+1]){
    return peak(arr,m+1,h);
  }
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int peake = peak(arr,0,n-1);

  cout<<"Peak element: "<<arr[peake]<<endl;
}
