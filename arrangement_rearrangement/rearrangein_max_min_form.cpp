#include<bits/stdc++.h>
using namespace std;

//Trick using multiplication and modulus
void rearrange(vector<int>&arr,int n){
  int max_element = arr[n-1]+1;
  int i;
  int max=n-1,min=0;
  for(i=0;i<n;i++){
    if(i%2==0){
      arr[i]+=arr[max]%max_element*max_element;
      max--;
    }
    else{
      arr[i]+=arr[min]%max_element*max_element;
      min++;
    }
  }
  for(i=0;i<n;i++)
    arr[i]/=max_element;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  rearrange(arr,n);
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
