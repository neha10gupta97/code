#include<bits/stdc++.h>
using namespace std;

//sorted the abs difference in multimap and iteraate it to get sorted order acc to abs diff
void sortbyabsolute(vector<int>&arr,int n,int x){
  int i;
  multimap<int,int>m;
  for(i=0;i<n;i++){
    m.insert({abs(x-arr[i]),arr[i]});
  }
  i=0;
  map<int,int>::iterator it;
  for(it=m.begin();it!=m.end();it++)
    arr[i++]=(*it).second;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int x;
  cin>>x;
  sortbyabsolute(arr,n,x);
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
