#include<bits/stdc++.h>
using namespace std;

//Method 2-maintaining the start point and last..
int maxdiff(vector<int>&arr,int n){
  int i;
  sort(arr.begin(),arr.end());
  int sum=0;
  for(i=0;i<n/2;i++){
    sum-=2*arr[i];
    sum+=2*arr[n-i-1];
  }
  return sum;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int d=maxdiff(arr,n);
  cout<<"Max difference: "<<d<<endl;
}
