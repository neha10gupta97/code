#include<bits/stdc++.h>
using namespace std;

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  int s = 0;
  for(s=0;s<n-1;s++){
    if(arr[s]>arr[s+1])
      break;
  }
  if(s==n-1){
    cout<<"Array already sorted\n";
    return 0;
  }
  int e = n-1;
  for(;e>0;e--){
    if(arr[e]<arr[e-1])
      break;
  }
  int mine=arr[s],maxe=arr[s];
  for(i=s+1;i<=e;i++){
    mine=min(mine,arr[i]);
    maxe=max(maxe,arr[i]);
  }

  for(i=0;i<s;i++){
    if(arr[i]>mine)
      s=i;
  }

  for(i=n-1;i>e;i--){
    if(arr[i]<maxe)
      e=i;
  }
  cout<<"Min unsorted array: ";
  for(i=s;i<=e;i++)
    cout<<arr[i]<<" ";
  cout<<endl;

}
