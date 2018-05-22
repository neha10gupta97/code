#include<bits/stdc++.h>
using namespace std;

vector<int>sortedSubsequence(vector<int>&arr,int n){
  int i;
  vector<int>left(n);
  vector<int>right(n);

  left[0]=-1;right[n-1]=-1;
  int mine=0,maxe=n-1;
  for(i=1;i<n;i++){
    if(arr[i]>arr[mine])
      left[i]=mine;
    else{
      mine=i;
      left[i]=-1;
    }
  }
  for(i=n-2;i>=0;i--){
    if(arr[i]<arr[maxe])
      right[i]=maxe;
    else{
      maxe=i;
      right[i]=-1;
    }
  }
  vector<int>ans;
  for(i=0;i<n;i++){
    if(left[i]!=-1&&right[i]!=-1){
      ans.push_back(arr[left[i]]);
      ans.push_back(arr[i]);
      ans.push_back(arr[right[i]]);
    }
  }
  return ans;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  vector<int>ans;
  ans = sortedSubsequence(arr,n);
  if(ans.size()==0)
    cout<<"No sorted triplet exits"<<endl;
  else{
    cout<<"All Sorted Subsequence of size 3: ";
    for(i=0;i<ans.size();i++){
      if(i%3==0)
        cout<<endl;
      cout<<ans[i]<<" ";
    }  
    cout<<endl;
  }
}
