#include<bits/stdc++.h>
using namespace std;

//Method 2-maintaining the start point and last..
int maxlength(vector<int>arr,int n){
  int i=0;
  int maxlength=0;
  int sum=0;
  unordered_map<int,int>m;

  for(i=0;i<n;i++){
    if(arr[i]==0)
      arr[i]=-1;
  }

  for(i=0;i<n;i++){
    sum+=arr[i];
    if(sum==0)
      maxlength=max(maxlength,i+1);
    if(m.find(sum)!=m.end())
      maxlength=max(maxlength,i-m[sum]);
    else
      m[sum]=i;
  }

  return maxlength;
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
