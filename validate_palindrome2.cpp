#include<bits/stdc++.h>
using namespace std;

bool validatePalindrome(string s){
  int n =s.length();
  int a =0,b=n-1;
  int flag1 =1;
  int count=0;
  while(a<b){
    if(s[a]!=s[b]){
      if(!count)
        a++;
      else{
        flag1=0;
        break;
      }
      count++;
    }
    else{
      a++;
      b--;
    }
  }
  count=0;
  int flag2=1;
  a=0;b=n-1;
  while(a<b){
    if(s[a]!=s[b]){
      if(!count)
        b--;
      else{
        flag2=0;
        break;
      }
      count++;
    }
    else{
      a++;
      b--;
    }
  }
  return flag1 || flag2;
}

main(){
  string s;
  cin>>s;

  bool a= validatePalindrome(s);
  if(a){
    cout<<"Yes string can become palindrome after removing one character\n";
  }
  else{
    cout<<"No string can't become palindrome after removing one character\n";
  }
}