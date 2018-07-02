#include<bits/stdc++.h>
using namespace std;

int minDist(vector<int>arr,int n,int a,int b){
  int i;
  int count=INT_MAX;
  int prev=-1;
  int ind=-1;
  for(i=0;i<n;i++){
    if(arr[i]==a||arr[i]==b){
      prev = arr[i];
      ind = i;
      break;
    }
  }
  for(i=0;i<n;i++){
    if(arr[i]==a||arr[i]==b){
      if(prev == arr[i]){
        ind = i;
      }
      else{
        count = min(count,i-ind);
        ind = i;
        prev = arr[i];
      }
    }
  }
  return count==INT_MAX? -1 : count;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int a,b;
  cin>>a>>b;

  int ans = minDist(arr,n,a,b);
  cout<<"Min distance b/w "<<a<<" and "<<b<<" : "<<ans<<endl;
}
