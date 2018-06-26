#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>arr,int left,int mid,int right,int n){
  int count =0;
  vector<int>temp(n);
  int i = left,j=mid,k=left;
  while(i<=mid-1 && j<=right){
    if(arr[i]<=arr[j])
      temp[k++] = (arr[i++]);
    else{
      temp[k++] = (arr[j++]);
      count+=mid - i;
    }
  }
  while(i<=mid-1){
    temp[k++] = (arr[i++]);
  }
  while(j<=right){
    temp[k++] = (arr[j++]);
  }
  for(i=left;i<=right;i++)
    arr[i]=temp[i];
  return count;
}

int count_inversion(vector<int>arr,int l, int r,int n){
  int count=0;
  if(r>l){
    int m= (l+r)/2;
    count = count_inversion(arr,l,m,n);
    count+= count_inversion(arr,m+1,r,n);
    count+=merge(arr,l,m+1,r,n);
  }
  return count;
}



main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int ans = count_inversion(arr,0,n-1,n);
  cout<<ans<<endl;
}
