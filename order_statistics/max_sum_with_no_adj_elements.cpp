#include<bits/stdc++.h>
using namespace std;

//using Min Heap - Priority Queue

int maxsum(vector<int>arr,int n){
  int incl=arr[0],excl=0,i;
  for(i=1;i<n;i++){
    int temp =incl;
    incl = excl + arr[i];
    excl = max(excl, temp);
  }
  return max(excl,incl);
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int ans = maxsum(arr,n);
  cout<<"Max sum in the array is "<<ans<<endl;
}
