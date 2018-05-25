#include<bits/stdc++.h>
using namespace std;

//This dont handle cases which have output <=0
int maxproduct(vector<int>arr,int n){
  int i;
  int final_maxp=1,maxp=1,minp=1;
  for(i=0;i<n;i++){
    // cout<<maxp<<" "<<minp<<" "<<final_maxp<<endl;
    if(arr[i]>0){
      maxp*=arr[i];
      minp=min(minp*arr[i],1);
    }
    else if(arr[i]==0){
      minp=1;
      maxp=1;
    }
    else{
      int temp =maxp;
      maxp=max(minp*arr[i],1);
      minp=temp*arr[i];
    }
    final_maxp = max(final_maxp,maxp);
  }
  return final_maxp;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int prod=maxproduct(arr,n);
  cout<<"Max product of subarry in array: "<<prod<<endl;
}
