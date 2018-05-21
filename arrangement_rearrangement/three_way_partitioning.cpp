#include<bits/stdc++.h>
using namespace std;

//Done using 2 pointers in array
void partition(vector<int>&arr,int n,int l,int h){
  int i=0,j=n-1,k=0;
  while(k<j){
    if(arr[k]<l){
      swap(arr[i],arr[k]);
      i++;k++;
    }
    else if(arr[k]>h){
      swap(arr[k],arr[j]);
      j--;
    }
    else
      k++;
  }
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int low,high;
  cin>>low>>high;
  partition(arr,n,low,high);
  cout<<"Partitioned Array: "
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
