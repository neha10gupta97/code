#include<bits/stdc++.h>
using namespace std;


main(){
  int n,len,i;
  cin>>len;
  vector<int>sumpair(len);
  for(i=0;i<len;i++)
    cin>>sumpair[i];
  cin>>n;
  vector<int>arr(n);

  int a = (sumpair[0]+sumpair[1]-sumpair[n-1])/2;
  arr[0]=a;
  for(i=1;i<n;i++){
    arr[i] = sumpair[i-1]-arr[0];
  }
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
