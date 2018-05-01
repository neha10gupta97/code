#include<bits/stdc++.h>
using namespace std;

void nthDigit(int n){
  int len=1;
  int base=9;
  int start=1;

  while(n>len*base){
    n-=(len*base);
    len++;
    base*=10;
    start*=10;
  }
  start+=(n-1)/len;
  string ans = to_string(start);
  cout<<"ans "<<ans<<" "<<ans[(n-1)%len]<<endl;
  cout<<ans[(n-1)%len]<<endl;
}

main(){
  int n;
  cin>>n;
  nthDigit(n);
}