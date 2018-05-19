#include<bits/stdc++.h>
using namespace std;

void printrotate(vector<int>&arr, int n, int k){
  int i;
  for(i=k;i<k+n;i++)
    cout<<arr[i%n]<<" ";
  cout<<endl;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int k;
  cin>>k;
  printrotate(arr,n,k);

}
