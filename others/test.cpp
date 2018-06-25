#include <bits/stdc++.h>
using namespace std;
// SPOJ --- DIVSUM - Divisor Summation
int main() {
  int j,t,n;
  cin>>t;
  while(t--){
    long long sum=0;
    cin>>n;
    if(n==1){
      cout<<0<<"\n";
    }
    else{
      int l=2;
      int h=n/2;
      while(l<h){
        if(n%l==0){
          sum+=l;
          sum+=n/l;
          h=n/l;
        }
        l++;
      }
      cout<<++sum<<"\n";
    }
  }
  return 0;
}
