#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
  int i;
  int sum=0;
  int l_sum=0;
  for(i=0;i<n;i++){
    l_sum+=arr[i];
    if(l_sum<0)
      l_sum=0;
    sum=max(sum,l_sum);
  }
  return sum;
}

int maxsum(int arr[],int n){
  int sum1=kadane(arr,n);
  int i,arr_sum=0;
  for(i=0;i<n;i++){
    arr_sum+=arr[i];
    arr[i]*=-1;
  }
  int sum2=arr_sum+kadane(arr,n);
  return max(sum1,sum2);
}

main(){
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
  int sum=maxsum(arr,n);
  cout<<"Maximum circular subarray sum: "<<sum<<endl;
}
