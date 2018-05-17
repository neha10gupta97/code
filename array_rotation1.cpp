#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
  if(!b)
    return a;
  gcd(b,a%b);
}

void rotate(vector<int>&arr,int d,int n){
  int g= gcd(d,n);
  int i;
  for(i=0;i<g;i++){
    int j=i;
    int temp=arr[j];
    while(1){
      int k=j+d;
      if(k>=n)
        k=k-n;
      if(k==i)
        break;
      arr[j]=arr[k];
      j=k;
    }
    arr[j]=temp;
  }

}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  int d;
  cin>>d;
  rotate(arr,d,n);
  cout<<"After rotating"<<endl;
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
