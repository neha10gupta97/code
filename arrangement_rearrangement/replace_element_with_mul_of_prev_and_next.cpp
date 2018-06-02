#include<bits/stdc++.h>
using namespace std;

void replace(vector<int>&arr,int n){
  int prev=arr[0];
  int i;
  for(i=0;i<n-1;i++){
    int temp =arr[i];
    arr[i]=prev*arr[i+1];
    prev = temp;
  }
  arr[i]=prev*arr[i];
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
