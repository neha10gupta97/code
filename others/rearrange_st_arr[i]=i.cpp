#include<bits/stdc++.h>
using namespace std;

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  i=0;
  while(i<n){
    if(arr[i]==-1 || arr[i]==i){
      i++;
      continue;
    }
    else{
      swap(arr[arr[i]],arr[i]);
    }
  }

  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
