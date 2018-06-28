#include<bits/stdc++.h>
using namespace std;

int peak(vector<int>arr,int l,int h,int n){
  int m = (l+h)/2;
  if((m==0 || arr[m]>arr[m-1]) && (m==n-1 || arr[m]>arr[m+1]))
    return m;
  else if(m>l && arr[m]<arr[m-1]){
    return peak(arr,l,m-1,n);
  }
  return peak(arr,m+1,h,n);
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int peake = peak(arr,0,n-1,n);

  cout<<"Peak element: "<<arr[peake]<<endl;
}
