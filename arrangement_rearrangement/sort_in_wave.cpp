#include<bits/stdc++.h>
using namespace std;

void sortWave(vector<int>&arr,int n){
  int i;
  for(i=0;i<n;i++){
    if(i%2==0 && i+1<n){
      if(arr[i]<arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    else if(i%2!=0 && i+1<n){
      if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
  }
  return;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  sortWave(arr,n);
  cout<<"Sorted in wave pattern: ";
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
