#include<bits/stdc++.h>
using namespace std;

void replace(vector<int>&arr,int n){
  int prev=arr[0];
  int next,i;
  for(i=0;i<n;i++){
    if(i==n-1)
      next = arr[i];
    else
      next=arr[i+1];
    int temp =arr[i];
    arr[i]=prev*next;
    prev = temp;
  }
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  replace(arr,n);
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
