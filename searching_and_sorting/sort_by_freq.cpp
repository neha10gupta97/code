#include<bits/stdc++.h>
using namespace std;

int comp(tuple<int,int,int> &a,tuple<int,int,int> &b){
  if(get<1>(a) == get<1>(b))
    return get<2>(a)< get<2>(b);
  return get<1>(a) > get<1>(b);
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  map<int,pair<int,int> >mp;

  for(i=0;i<n;i++){
    if(mp.find(arr[i])!=mp.end())
      mp[arr[i]].first++;
    else
      mp[arr[i]] = {1,i};
  }

  vector<tuple<int,int,int> >vec;
  map<int,pair<int,int> >:: iterator it;
  for(it = mp.begin();it!=mp.end();it++){
    pair<int,int> p =it->second;
    vec.push_back(make_tuple(it->first,p.first,p.second));
  }

  sort(vec.begin(),vec.end(),comp);

  cout<<"sorted array by freq: ";
  int l = vec.size();
  for(i=0;i<l;i++)
    cout<<get<0>(vec[i])<<" ";
  cout<<endl;
}
