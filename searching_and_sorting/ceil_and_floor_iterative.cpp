#include<bits/stdc++.h>
using namespace std;

int ceilIndex(vector<int>arr,int l,int h,int x){
  int ceil = -1;
  while(l<=h){
    int m= (l+h)/2;
    if(arr[m]==x)
      return m;
    else if(arr[m]>x){
      ceil = m;
      h=m-1;
    }
    else
      l = m+1;
  }
  return ceil;
}

int floorIndex(vector<int>arr,int l,int h,int x){
  int floor = -1;
  while(l<=h){
    int m = (l+h)/2;
    if(arr[m]==x)
      return m;
    else if(arr[m]<x){
      floor = m;
      l = m+1;
    }
    else
      h = m-1;
  }
  return floor;
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
