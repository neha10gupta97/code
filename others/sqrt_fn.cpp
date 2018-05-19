#include<bits/stdc++.h>
using namespace std;

int sqrt(int x){
  if(x==0||x==1)
    return x;
  int l=1,h=x/2+1;
  int m,ans;
  while(l<=h){
    m=(l+h)/2;
    if(m*m==x){
      return m;
    }
    else if(m*m>x){
      h=m-1;
    }
    else{
      ans=m;
      l=m+1;
    }
  }
  return ans;
}

main(){
  int x;
  cin>>x;
  int ans= sqrt(x);
  cout<<ans<<endl;
}