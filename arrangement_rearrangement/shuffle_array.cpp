#include<bits/stdc++.h>
using namespace std;

int shuffle(int arr[],int n){
  int i,j;
  for(i=n-1;i>=0;i--){
    j=rand()%(i+1);
    swap(arr[i],arr[j]);
  }
}

main(){
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
  int sum=shuffle(arr,n);
  cout<<"Array after shuffle: ";
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
