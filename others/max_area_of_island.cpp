#include<bits/stdc++.h>
using namespace std;

int row[4]={1,0,-1,0};
int col[4]={0,-1,0,1};

bool isValid(vector<vector<int> >arr,int x,int y,int n,int m){
  return (x<n && x>=0 && y<m && y>=0 && arr[x][y]==1);
}

void dfs(vector<vector<int> >arr,int n,int m,int s,int d,int &maxx,int c,vector<vector<int> >&visit){

  visit[s][d]=1;
  int k;
  for(k=0;k<4;k++){
    int x=s+row[k];
    int y = d+col[k];

    if(isValid(arr,x,y,n,m)&&visit[x][y]==0){
      c++;
      //cout<<"xy: "<<x<<" "<<y<<endl;
      visit[x][y]=1;
      maxx=max(c,maxx);
      //cout<<"maxx:,c "<<maxx<<" "<<c<<endl;
      dfs(arr,n,m,x,y,maxx,c,visit);
    }
  }
}

main(){
  int n,m,i,j;
  cin>>n>>m;
  vector<vector<int> >arr(n,vector<int>(m));
  for(i=0;i<n;i++){
    for(j=0;j<m;j++)
      cin>>arr[i][j];
  }

  int maxx=0;

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(arr[i][j]==1){
        vector<vector<int> >visit(n,vector<int>(m,0));
       // cout<<"i: "<<i<<" "<<j <<endl;
        dfs(arr,n,m,i,j,maxx,1,visit);
        //cout<<maxx<<endl;
      }
    }
  }

  cout<<maxx<<endl;
}