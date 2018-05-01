#include<bits/stdc++.h>
using namespace std;

void solveEquation(string s){
  int n= s.length();
  int sign=1;
  int sum=0;
  int j,i=0;
  int coeff=0;
  for(j=0;j<n;j++){
    if(s[j]=='+'||s[j]=='-'){
      if(j>i){
        sum+=sign*stoi(s.substr(i,j-i));
        i=j;
      }
    }
    else if(s[j]=='x'){
      if(i==j || s[j-1]=='-'){
        coeff+=sign*1;
      }
      else if(s[j-1]=='+'){
        coeff+=sign*1;
      }
      else{
        coeff+=sign*stoi(s.substr(i,j-i));
      }
      i=j+1;
    }
    else if(s[j]=='='){
      if(j>i){
        sum+=sign*stoi(s.substr(i,j-i));
      }
      sign*=-1;
      i=j+1;
    }
  }
  if(i<n){
    sum+=sign*stoi(s.substr(i));
  }
  if(!sum && !coeff)
    cout<<"Infinite solutions\n";
  else if(!coeff && sum)
    cout<<"No solution\n";
  else{
    int ans= -sum/coeff;
    cout<<"Value of x: "<<ans<<endl;
  }

}

main(){
  string s;
  cin>>s;
  solveEquation(s);
}