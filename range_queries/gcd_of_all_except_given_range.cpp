#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
  if(!b)return a;
  return gcd(b,a%b);
}

main(){
  int n,k,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  vector<int>left(n);
  vector<int>right(n);

  left[0]=arr[0];
  for(i=1;i<n;i++){
    left[i]=gcd(left[i-1],arr[i]);
  }
  right[n-1]=arr[n-1];
  for(i=n-2;i>=0;i--){
    right[i]=gcd(right[i+1],arr[i]);
  }

  cin>>k;

  int l,r;
  while(k--){
      cin>>l>>r;
      if(l==0 && r==n-1)
        cout<<"Range == Array size\n";
      else if(l==0)
        cout<<right[r+1]<<endl;
      else if(r==n-1)
        cout<<left[l-1]<<endl;
      else
        cout<<gcd(left[l-1],right[r+1])<<endl;
  }
}
