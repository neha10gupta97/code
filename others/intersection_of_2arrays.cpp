#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>a,int n,vector<int>b,int m){
  vector<int>ans;
  unordered_map<int,int>umap;
  int i;
  for(i=0;i<n;i++)
    umap.insert({a[i],1});
  for(i=0;i<m;i++){
    if(umap[b[i]]==1){
      ans.push_back(b[i]);
      umap[b[i]]=0;
    }

  }
  return ans;
}

main(){
  int n,m,i;
  cin>>n;
  vector<int>arr1(n);
  for(i=0;i<n;i++)
    cin>>arr1[i];
  cin>>m;
  vector<int>arr2(m);
  for(i=0;i<m;i++)
    cin>>arr2[i];
  vector<int>ans;
  ans = intersection(arr1,n,arr2,m);
  for(i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
  cout<<endl;
}