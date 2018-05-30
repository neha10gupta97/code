#include<bits/stdc++.h>
using namespace std;

int myComp(pair<int,int> a,pair<int,int> b){
  return a.second > b.second;
}

void sort_by_frquency(vector<int>&arr,int n){
  int i,j;
  map<int,int>mp;
  for(i=0;i<n;i++){
    if(mp.find(arr[i])!=mp.end())
      mp[arr[i]]++;
    else
      mp[arr[i]]=1;
  }
  vector<pair<int,int> >sortarr(mp.begin(),mp.end());
  sort(sortarr.begin(),sortarr.end(),myComp);
  for(i=0;i<sortarr.size();i++){
    for(j=0;j<sortarr[i].second;j++)
      cout<<sortarr[i].first<<" ";
  }
  cout<<endl;
}

main(){
  int n,i,j;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  sort_by_frquency(arr,n);
}
