#include<bits/stdc++.h>
using namespace std;

void maximize1(vector<int>arr,int n,int m){
  int l=0,h=0,count0=0,count1=0,maxlen=-1;
  int i;
  while(h<n){
    if(count0<=m){
      if(arr[h]==0)
        count0++;
      h++;
    }
    if(count0>m){
      if(arr[l]==0)
        count0--;
      l++;
    }
    if(h-l>maxlen){
      maxlen=h-l;
      count1=l;
    }
  }
  for(i=count1;i<count1+maxlen;i++){
    if(arr[i]==0)
      cout<<i<<" ";
  }
  cout<<endl;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int m;
  cin>>m;
  maximize1(arr,n,m);
}
