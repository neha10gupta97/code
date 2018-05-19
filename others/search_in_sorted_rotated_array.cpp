#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&arr,int l,int h,int x){
  int m;
  while(l<=h){
    m=(l+h)/2;
    if(arr[m]==x)
      return m;
    if(arr[l]<arr[m]){
      if(x<=arr[m] && x>=arr[l])
        return search(arr,l,m-1,x);
      return search(arr,m+1,h,x);
    }
    if(x>=arr[m]&&x<=arr[h])
      return search(arr,m+1,h,x);
    return search(arr,l,m-1,x);
  }
  return -1;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int key;
  cout<<"enter element to find\n";
  cin>>key;
  int ans = search(arr,0,n-1,key);
  if(ans==-1)
    cout<<"Not Found\n";
  else
    cout<<"Element found at: "<<ans<<endl;
}
