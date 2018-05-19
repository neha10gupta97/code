#include<bits/stdc++.h>
using namespace std;

int maxvalue(vector<int>&arr,int n){
  int maxv=0,sum=0,i;
  for(i=0;i<n;i++){
    maxv+=i*arr[i];
    sum+=arr[i];
  }
  int ans=maxv;
  for(i=0;i<n-1;i++){
    int x = maxv + sum - n*arr[n-i-1];
    maxv = x;
    ans = max(ans,x);
  }
  return ans;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int a = maxvalue(arr,n);
  cout<<"max value: "<<a<<endl;
}
