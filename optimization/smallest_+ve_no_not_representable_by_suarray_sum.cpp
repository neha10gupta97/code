#include<bits/stdc++.h>
using namespace std;

int smallestsubarray(vector<int>arr,int n){
  int res =1;
  for(int i=0;i<n&&arr[i]<=res;i++)
    res+=arr[i];
  return res;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  cout<<"smallest +ve no that cant be respresnted by sum of subarray: ";
  cout<<smallestsubarray(arr,n)<<endl;
}
