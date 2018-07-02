#include<bits/stdc++.h>
using namespace std;

int waterTrapped(vector<int>arr,int n){
  int i,left=0,right=0;
  int l=0,h=n-1;
  int count=0;
  while(l<=h){
    if(arr[l]<arr[h]){
      left=max(left,arr[l]);
      count+=left-arr[l];
      l++;
    }
    else{
      right=max(right,arr[h]);
      count+=right-arr[h];
      h--;
    }
  }
  return count;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  int ans = waterTrapped(arr,n);
  cout<<"Amount of water that can be trapped: "<<ans<<endl;
}
