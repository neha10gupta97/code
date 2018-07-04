#include<bits/stdc++.h>
using namespace std;

main(){
  int i,j,n;
  cin>>n;
  vector<int>arr(n);

  for(i=0;i<n;i++)
    cin>>arr[i];

  vector<int>jump(n,n+1);
  jump[0]=0;

  for(i=0;i<n;i++){
    for(j=i+1;j<=arr[i]+i&&j<n;j++)
      jump[j]=min(jump[j],jump[i]+1);
  }
  if(jump[n-1]<n-1)
    cout<<jump[n-1]<<endl;
  else
    cout<<"Can't reach the end\n";
}
