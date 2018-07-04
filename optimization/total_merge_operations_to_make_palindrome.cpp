#include<bits/stdc++.h>
using namespace std;

int makePalindrome(vector<int>arr,int n){
  int i=0,j=n-1;
  int count=0;
  while(j>i){
    if(arr[i]==arr[j]){
      i++;j--;
    }
    else if(arr[i]<arr[j]){
      arr[i+1]+=arr[i];
      i++;
      count++;
    }
    else{
      arr[j-1]+=arr[j];
      j--;
      count++;
    }
  }
  return count;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr1(n);
  for(i=0;i<n;i++)
    cin>>arr1[i];

  cout<<"No of merge operatiosn to make palindrome: "<<makePalindrome(arr1,n)<<endl;
}