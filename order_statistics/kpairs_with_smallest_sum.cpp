#include<bits/stdc++.h>
using namespace std;

//using Min Heap - Priority Queue

vector<pair<int,int> > kpairs(vector<int>arr1,int n,vector<int>arr2,int m,int k){
  int i,j;
  vector<pair<int,int> >ans;
  if(k>n*m){
    return ans;
  }
  ans.push_back({arr1[0],arr2[0]});
  k--;
  int a=0,b=0;
  i=1;j=1;
  while(k--){
    if(i<n&&j<m){
      if(arr1[i]+arr2[b]<arr2[j]+arr1[a]){
        ans.push_back({arr2[b],arr1[i]});
        i++;
        if(i==n){
          b++;i=a+1;
        }
      }
      else{
        ans.push_back({arr1[a],arr2[j]});
        j++;
        if(j==m){
          a++;j=b+1;
        }
      }
    }
    else if(j>=m&&i<n){
      ans.push_back({arr2[b],arr1[i]});
      i++;
    }
    else if(j<m&&i>=n){
      ans.push_back({arr1[a],arr2[j]});
      j++;

    }
  }
  return ans;
}

main(){
  int i,n,m;
  cin>>n>>m;
  vector<int>arr1(n);
  vector<int>arr2(m);
  for(i=0;i<n;i++)
    cin>>arr1[i];
  for(i=0;i<m;i++)
    cin>>arr2[i];
  int k;
  cin>>k;
  vector<pair<int,int> > ans = kpairs(arr1,n,arr2,m,k);
  if(!ans.size())
    cout<<"k>n*m\n";
  else{
    cout<<k<<" pairs: \n";
    int len = ans.size();
    for(i=0;i<len;i++)
      cout<<ans[i].first<<" "<<ans[i].second<<endl;
  }
}
