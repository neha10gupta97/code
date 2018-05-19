#include<bits/stdc++.h>
using namespace std;

void plusOne(vector<int>&arr,int n){
  int carry=0;
  arr[n-1]+=1;
  carry=arr[n-1]/10;
  arr[n-1]%=10;

  int k=n-2;
  while(carry && k>=0){
    arr[k]+=carry;
    carry=arr[k]/10;
    arr[k]%=10;
    k--;
  }
  if(carry){
    arr.insert(arr.begin(),carry);
  }
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  plusOne(arr,n);

  cout<<"Updated arrar >>"<<endl;
  n=arr.size();
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}