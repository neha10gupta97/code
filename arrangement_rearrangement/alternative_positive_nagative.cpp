#include<bits/stdc++.h>
using namespace std;

//First separate positive and nagative then swap for alternative
void separate(vector<int>&arr, int n){
  int i=0;
  int j=n;
  while(i<j){
    if(arr[i]>=0)
      i++;
    else{
      j--;
      int temp = arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
    }
  }
  int k=1;
  while(j<=n-1 && k<j && arr[k]>0){
    int temp = arr[j];
    arr[j]=arr[k];
    arr[k]=temp;
    j++;
    k+=2;
  }
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  separate(arr,n);
  cout<<"Alternative positive negative: ";
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
