#include<bits/stdc++.h>
using namespace std;

main(){
  int i,j,n;
  cin>>n;
  vector<int>arr(n);

  for(i=0;i<n;i++)
    cin>>arr[i];

  vector<int>sumarr(n);

  for(i=0;i<n;i++)
    sumarr[i]=arr[i];

  for(i=1;i<n;i++){
    for(j=0;j<i;j++)
      if(arr[j]<arr[i])
        sumarr[i]=max(sumarr[i],sumarr[j]+arr[i]);
  }
  int ans=sumarr[i];
  for(i=0;i<n;i++){
    ans=max(ans,sumarr[i]);
  }
    cout<<ans<<endl;
}
