#include<bits/stdc++.h>
using namespace std;

int longestSpan(vector<int>arr1,vector<int>arr2,int n){
  int i;
  unordered_map<int,int>umap;
  int sum =0;
  vector<int>arr(n);
  for(i=0;i<n;i++){
    arr[i]=arr1[i]-arr2[i];
  }

  int ans=0;

  for(i=0;i<n;i++){
    sum+=arr[i];
    if(sum==0)
      ans = i+1;
    if(umap.find(sum)!=umap.end()){
      ans = max(ans,i-umap[sum]);
    }
    else
      umap[sum]=i;
  }
  return ans;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr1(n);
  vector<int>arr2(n);
  for(i=0;i<n;i++)
    cin>>arr1[i];
  for(i=0;i<n;i++)
    cin>>arr2[i];

  cout<<"Longest span: "<<longestSpan(arr1,arr2,n)<<endl;
}