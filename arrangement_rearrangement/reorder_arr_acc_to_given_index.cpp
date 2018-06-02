#include<bits/stdc++.h>
using namespace std;

void reorder(vector<int>&arr,vector<int>&in,int n){
  int i;
  for(i=0;i<n;i++){
    if(in[i]!=i){
      int temp =in[i];
      in[i]=arr[temp];
      
    }
  }
}

main(){
  int n,m,i;
  cin>>n,m;
  vector<int>arr(n);
  vector<int>brr(m);
  for(i=0;i<n;i++)
    cin>>arr[i];
  for(i=0;i<m;i++)
    cin>>index[i];
  reorder(arr,index,n);
}
