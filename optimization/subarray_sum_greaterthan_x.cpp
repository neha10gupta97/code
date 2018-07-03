#include<bits/stdc++.h>
using namespace std;

void smallestsubarray(vector<int>arr,int n,int x){
  int e=0,s=0,i;
  int sum=0,ans=n+1;
  while(e<n){
    sum+=arr[e++];
    while(sum<=0 && s<n){
      sum -=arr[s++];
    }
    while(sum>x && s<n){
      ans=min(ans,e-s);
      sum-=arr[s++];
    }

  }
  cout<<"Min length subarry with sum > "<<x<<" is "<<ans<<endl;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int x;
  cin>>x;

  smallestsubarray(arr,n,x);
}
