//Binary Search
#include<bits/stdc++.h>
using namespace std;

int maxele(vector<int>arr,int l,int h,int n){
  if(l==h)
    return arr[l];
  int m = (l+h)/2;
  if((m==l && arr[m]>arr[m+1])||(m==h && arr[m]>arr[m-1])){
    cout<<"1\n";
    return arr[m];
  }
  if(m>0 && m<n-1 && arr[m]>arr[m-1] && arr[m]>arr[m+1]){
    cout<<"2\n";
    return arr[m];
  }
  if(m>0 && m<n-1 && arr[m]<arr[m+1]){
    cout<<"3\n";
    return maxele(arr,m+1,h,n);
  }
  if(m>0 && m<n-1 && arr[m]<arr[m-1]){
    cout<<"4\n";
    return maxele(arr,0,m-1,n);
  }
  return -1;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int ans = maxele(arr,0,n-1,n);
  cout<<"Max element in increading-decreasing array: "<<ans<<endl;
}
