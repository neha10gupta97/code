#include <bits/stdc++.h>
using namespace std;
// SPOJ --- DIVSUM - Divisor Summation
int main() {
int j,t,n;
cin>>t;
while(t--){
int sum=0;
cin>>n;
if(n==1){
cout<<0<<"\n";
}
else{
for(j=2;j<=sqrt(n);j++){
if(n%j==0){
if(j == n/j){
sum+=j;
}
else
sum = sum + j + n/j;
}
}
cout<<sum+1<<"\n";
}
}
return 0;
}
