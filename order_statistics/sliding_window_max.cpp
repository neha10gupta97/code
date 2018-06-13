#include<bits/stdc++.h>
using namespace std;

//using Min Heap - Priority Queue

void maxno(vector<int>arr,int n,int k){
  deque<int> dq(k);
  int i;
  for(i=0;i<k;i++){
    while(!dq.empty() && arr[i]>=arr[dq.back()])
      dq.pop_back();
    dq.push_back(i);
  }

  for(;i<n;i++){
    cout<<arr[dq.front()]<<" ";
    while(!dq.empty() && dq.front()<=i-k)
      dq.pop_front();
    while(!dq.empty() && arr[i]>=arr[dq.back()])
      dq.pop_back();
    dq.push_back(i);
  }
  cout<<arr[dq.front()]<<endl;

}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int k;
  cin>>k;
  maxno(arr,n,k);
}
