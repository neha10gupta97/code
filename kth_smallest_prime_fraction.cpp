#include<bits/stdc++.h>
using namespace std;

vector<int> kthSmallest(vector<int>&arr,int k){
  priority_queue<pair<double,pair<int,int> > >pq;
  int i,n;
  n=arr.size();
  // cout<<"n: "<<n<<endl;
  for(i=0;i<n;i++){
    //pushed negative as pq is max priority queue
    pq.push({((-1.0*arr[i])/arr[n-1]),{i,n-1}});
    // cout<<arr[pq.top().second.first]<<" "<<arr[pq.top().second.second]<<endl;
  }

  pair<int,int> q;
  while(k--){
    q= pq.top().second;
    q.second--;
    pq.pop();
    // cout<<q.first<<": "<<arr[q.first]<<" "<<q.second<<": "<<arr[q.second]<<endl;
    pq.push({((-1.0*arr[q.first])/arr[q.second]),{q.first,q.second}});
  }
  vector<int>result;
  result.push_back(arr[q.first]);
  result.push_back(arr[q.second+1]);
  return result;
}

main(){
  int k,n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  cin>>k;
  vector<int>ans;
  ans = kthSmallest(arr,k);
  cout<<ans[0]<<" "<<ans[1]<<endl;
}