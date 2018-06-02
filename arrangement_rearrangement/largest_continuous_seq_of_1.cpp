#include<bits/stdc++.h>
using namespace std;

vector<int> largestseq(vector<int>arr,int n){
  int prev0 =-1;
  int prev_prev0 =-1;
  int max_count = INT_MIN;
  int ind;
  int i;
  for(i=0;i<n;i++){
    if(arr[i]==0){
      if(i-prev_prev0 > max_count){
        max_count =i-prev_prev0-1;
        ind = prev0;
      }
      prev_prev0 =prev0;
      prev0 = i;
    }
  }
  if(n-prev_prev0 > max_count){
    max_count = n-prev_prev0;
    ind = prev0;
  }
  vector<int>ans;
  ans.push_back(max_count);
  ans.push_back(ind);
  return ans;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  vector<int>ans = largestseq(arr,n);
  if(ans[1]==-1)
    cout<<"no index of 0 to increase the length of longest cont seq of 1\n";
  else
    cout<<"Index of 0 to be switched to 1 to make longest cont seq of 1 of size "<<ans[0]<<" is: "<<ans[1]<<endl;
}
