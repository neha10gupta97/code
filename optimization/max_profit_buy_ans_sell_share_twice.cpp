#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>arr,int n){
  int i;
  vector<int>profit(n,0);
  int maxp=arr[n-1];
  for(i=n-2;i>=0;i--){
    maxp=max(maxp,arr[i]);
    profit[i]=max(profit[i+1],maxp-arr[i]);
  }

  int minp=arr[0];
  for(i=1;i<n-1;i++){
    minp=min(minp,arr[i]);
    profit[i]=max(profit[i-1],profit[i+1]+arr[i]-minp);
  }
  return profit[n-2];
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  cout<<"Max profit "<<maxProfit(arr,n)<<endl;
}
