#include<bits/stdc++.h>
using namespace std;

main(){
  int n,k,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  vector<int>left(n);
  vector<int>right(n);

  left[0]=0;
  for(i=1;i<n;i++){
    if(arr[i]>arr[i-1])
      left[i]=i;
    else
      left[i]=left[i-1];
  }
  right[n-1]=n-1;
  for(i=n-2;i>=0;i--){
    if(arr[i]>arr[i+1])
      right[i]=i;
    else
      right[i]=right[i+1];
  }

  cin>>k;

  int l,r;
  while(k--){
      cin>>l>>r;
      if(right[l]>=left[r]){
        cout<<"Yes mountain\n";
        for(i=l;i<=r;i++)
          cout<<arr[i]<<" ";
        cout<<endl;
      }
      else
        cout<<"NO\n";
  }
}
