#include<bits/stdc++.h>
using namespace std;

int maxlength(vector<int>&arr,int n){
  int i;
  vector<int>inc(n);
  vector<int>dec(n);
  inc[0]=1;dec[n-1]=1;
  for(i=1;i<n;i++){
    inc[i]=arr[i-1]<arr[i]?inc[i-1]+1:1;
  }
  for(i=n-2;i>=0;i--)
    dec[i]=arr[i+1]<arr[i]?dec[i+1]+1:1;

  for(i=0;i<n;i++)
    cout<<inc[i]<<" ";
  cout<<endl;

  for(i=0;i<n;i++)
    cout<<dec[i]<<" ";
  cout<<endl;

  int ans=0;
  for(i=0;i<n;i++)
    ans=max(ans,inc[i]+dec[i]-1);

  return ans;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int l=maxlength(arr,n);
  cout<<"Max length subarray: "<<l<<endl;
}
