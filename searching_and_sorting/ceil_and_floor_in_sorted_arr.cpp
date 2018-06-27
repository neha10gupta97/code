#include<bits/stdc++.h>
using namespace std;

int ceilIndex(vector<int>arr,int l,int h,int x){
  if(x<arr[l])
    return l;
  else if(l>arr[h])
    return -1;
  int m = (l+h)/2;
  if(arr[m]==x)
    return m;
  else if(arr[m]<x){
    if(m<=h-1 && arr[m+1]>=x)
      return m+1;
    else
      return ceilIndex(arr,m+1,h,x);
  }
  else{
    if(m>=l+1 && arr[m-1]<x)
      return m;
    else
      return ceilIndex(arr,l,m-1,x);
  }
}

int floorIndex(vector<int>arr,int l,int h,int x){
  if(x<arr[l])
    return -1;
  if(x>arr[h])
    return h;
  int m = (l+h)/2;

  if(arr[m]==x)
    return m;
  else if(arr[m]<x){
    if(m<=h-1 && arr[m+1]>x)
      return m;
    else
      return floorIndex(arr,m+1,h,x);
  }
  else{
    if(m>=l+1 && arr[m-1]<x)
      return m-1;
    else
      return floorIndex(arr,l,m-1,x);
  }

}

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  int x;
  cin>>x;
  int c=ceilIndex(arr,0,n-1,x);
  int f=floorIndex(arr,0,n-1,x);

  int ceil = c>=0?arr[c]:-1;
  int floor = f>=0?arr[f]:-1;

  cout<<"Ceil of "<<x<<" = "<<ceil<<endl;
  cout<<"Floor of "<<x<<" = "<<floor<<endl;
}
