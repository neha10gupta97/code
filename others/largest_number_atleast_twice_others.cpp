#include<bits/stdc++.h>
using namespace std;

int isLargestNoTwiceOthers(vector<int>arr){
  int n=arr.size();
  int max1=arr[0],max2=-1;
  int in=0,i;
  for(i=1;i<n;i++){
    if(arr[i]>max1){
      max2=max1;
      max1=arr[i];
      in=i;
    }else{
      max2=max(max2,arr[i]);
    }
  }

  if(max1>=2*max2)
    return in;
  else
    return -1;
}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  int a=isLargestNoTwiceOthers(arr);
  cout<<a<<endl;
}