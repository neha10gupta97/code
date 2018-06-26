#include<bits/stdc++.h>
using namespace std;

int lowerIndex(vector<int>arr,int l,int h,int x){
  while(l<=h){
    int m = (l+h)/2;
    if(arr[m]>=x)
      h=m-1;
    else
      l=m+1;
  }
  return l;
}

int upperIndex(vector<int>arr,int l,int h,int x){
  while(l<=h){
    int m = (l+h)/2;
    if(arr[m]<=x)
      l=m+1;
    else
      h=m-1;
  }
  return h;
}

main(){
  int n,k,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  sort(arr.begin(),arr.end());

  cin>>k;

  int l,r;
  while(k--){
      cin>>l>>r;
      int index_l = lowerIndex(arr,0,n-1,l);
      int index_r = upperIndex(arr,0,n-1,r);
      cout<<index_r-index_l+1<<endl;;
  }
}
