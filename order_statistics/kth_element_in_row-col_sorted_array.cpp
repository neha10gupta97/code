#include<bits/stdc++.h>
using namespace std;

struct node{
  int val,r,c;
};

int comp(node &a, node &b){
  return a.val<b.val;
}

int kthelement(vector<vector<int> >arr,int n,int m,int k){
  int i;
  priority_queue<node,vector<node>,comp > pq;
  node temp,x;
  for(i=0;i<m;i++){
    temp.val=arr[0][i];
    temp.r = 0;
    temp.c = i;
    pq.push(temp);
  }
  for(i=0;i<k;i++){
    x = pq.top();
    if(x.r<n-1){
      temp.val=arr[x.r+1][x.c];
      temp.r = x.r+1;
      temp.c = x.c;
      pq.push(temp);
    }
  }
  return x.val;
}

main(){
  int n,m,i,j;
  cin>>n>>m;
  vector<vector<int> >arr(n,vector<int>(m));
  for(i=0;i<n;i++){
    for(j=0;j<m;j++)
      cin>>arr[i][j];
  }
  int k;
  cin>>k;
  kthelement(arr,n,m,k);
}
