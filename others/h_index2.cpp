#include<bits/stdc++.h>
using namespace std;

int hIndex(vector<int>& c) {
  int n=c.size();
  int i;
  vector<int> arr(n+1,0);
  for(i=0;i<n;i++){
    if(c[i]>=n)
      arr[n]++;
    else
      arr[c[i]]++;
  }
  int count=0;
  for(i=n;i>=0;i--){
    count+=arr[i];
    if(count>=i)
      return i;
  }
  return 0;
}

main(){
  int n;
  cin>>n;
  vector<int> c(n);
  for(int i=0;i<n;i++)
    cin>>c[i];
  cout<<hIndex(c)<<endl;
}
