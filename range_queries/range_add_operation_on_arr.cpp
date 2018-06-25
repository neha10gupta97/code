#include<bits/stdc++.h>
using namespace std;

main(){
  int n,k,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  cout<<"Intial Array before add operations: ";
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;

  cin>>k;  

  int l,r,num;
  while(k--){
      cin>>l>>r>>num;
      // cout<<l<<" "<<r<<" "<<num<<endl;
      arr[l]+=num;
      if(r<n-1)
        arr[r+1]-=num;
  }
  for(i=1;i<n;i++){
    arr[i]+=arr[i-1];
  }
  cout<<"Final Array after add operations: ";
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
