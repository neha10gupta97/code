#include<bits/stdc++.h>
using namespace std;

main(){
  int n,k,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  cin>>k;

  unordered_map<int,vector<int> >mp;
  for(i=0;i<n;i++){
    mp[arr[i]].push_back(i);
  }

  int l,r,x;
  while(k--){
    cin>>l>>r>>x;
    int a = lower_bound(mp[x].begin(),mp[x].end(),l)-mp[x].begin();
    int b = upper_bound(mp[x].begin(),mp[x].end(),r)-mp[x].begin();
    // cout<<b<<" "<<a<<" ";
    cout<<b-a<<endl;
  }
}
