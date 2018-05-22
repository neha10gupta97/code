#include<bits/stdc++.h>
using namespace std;

//Method 2-maintaining the start point and last..
int maxlength(vector<int>&arr,int n){
  int i=0;
  int start=0,nextstart=0;
  int maxlength=1;
  while(i<n-1){
    while(i<n-1&&arr[i]<=arr[i+1])
      i++;
    while(i<n-1&&arr[i]>=arr[i+1]){
      if(i<n-1&&arr[i]>arr[i+1])
        nextstart=i+1;
      i++;
    }
    maxlength = max(maxlength,i-(start-1));
    start=nextstart;
  }
  return maxlength;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int l=maxlength(arr,n);
  cout<<"Max length subarray: "<<l<<endl;
}
