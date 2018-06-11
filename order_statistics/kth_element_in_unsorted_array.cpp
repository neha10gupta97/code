#include<bits/stdc++.h>
using namespace std;

//using Min Heap - Priority Queue

int kthelement(vector<int>arr,int n,int k){
  priority_queue<int, vector<int>,greater<int> >pq;
  int i;
  for(i=0;i<n;i++){
    pq.push(arr[i]);
  }
  for(i=0;i<k-1;i++){
    pq.pop();
  }
  return pq.top();
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int k;
  cin>>k;
  int ans = kthelement(arr,n,k);
  cout<<"Kth smallest element in the array is "<<ans<<endl;
}
