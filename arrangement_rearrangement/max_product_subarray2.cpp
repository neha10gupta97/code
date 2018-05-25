#include<bits/stdc++.h>
using namespace std;

//Also Handles cases which have output <=0
int maxproduct(vector<int>arr,int n){
  int i;
  int final_maxprod=arr[0],maxprod=arr[0],minprod=arr[0];
  int maxprev=arr[0],minprev=arr[0];
  for(i=1;i<n;i++){
    maxprod = max(max(maxprev*arr[i],minprev*arr[i]),arr[i]);
    minprod = min(min(maxprev*arr[i],minprev*arr[i]),arr[i]);
    final_maxprod = max(final_maxprod,maxprod);
    minprev = minprod;
    maxprev = maxprod;
  }
  return final_maxprod;
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
