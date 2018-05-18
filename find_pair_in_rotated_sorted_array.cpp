#include<bits/stdc++.h>
using namespace std;

void find(vector<int>&arr,int n,int x){
  int i,m=arr[0],in=0;
  for(i=1;i<n;i++){
    if(m<arr[i]){
      m=arr[i];
      in=i;
    }
  }
  int h=in,l=in+1;
  while(arr[h]>arr[l]){
    if(l>=n)
      l=0;
    if(h<0)
      h=n-1;
    int sum=arr[h]+arr[l];
    if(sum==x){
      cout<<"found : "<<arr[l]<<" "<<arr[h]<<endl;
      return ;
    }
    if(sum>x){
      h--;
      if(h<0)
        h=n-1;
    }
    else{
      l++;
      if(l>=n)
        l=0;
    }
  }
  cout<<"not found\n";
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int key;
  cin>>key;
  find(arr,n,key);

}
