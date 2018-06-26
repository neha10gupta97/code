#include<bits/stdc++.h>
using namespace std;


main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  set<int>s;
  int count =0;
  s.insert(arr[0]);
  for(i=1;i<n;i++){
    s.insert(arr[i]);
    set<int>:: iterator j = s.upper_bound(arr[i]);
    count+= distance(j,s.end());
  }
  cout<<count<<endl;
}
