#include<bits/stdc++.h>
using namespace std;

//using Min Heap - Priority Queue

int mindistance(vector<int>arr,int n,int x,int y){
  int i,prev;
  int mind = n;
  for(i=0;i<n;i++){
    if(arr[i]==x || arr[i] == y){
      if(arr[prev] != arr[i])
        mind=min(mind,abs(prev-i));
      prev = i;
    }
  }
  return mind;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int x,y;
  cin>>x>>y;
  int ans = mindistance(arr,n,x,y);
  cout<<"Min distance b/w "<<x<<" and "<<y<<" is "<<ans<<endl;
}
