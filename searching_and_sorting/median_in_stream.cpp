#include<bits/stdc++.h>
using namespace std;

main(){
  int n;
  float median = 0;
  priority_queue<int>maxq;
  priority_queue<int, vector<int>, greater<int> >minq;
  while(1){
    cin>>n;
    if(n<0)
      break;
    if(maxq.size()>minq.size()){
      if(n < median){
        minq.push(maxq.top());
        maxq.pop();
        maxq.push(n);
      }
      else{
        minq.push(n);
      }
      median =  ((float)minq.top() + (float)maxq.top())/2;
    }
    else if(maxq.size()<minq.size()){
      if(n > median){
        maxq.push(minq.top());
        minq.pop();
        minq.push(n);
      }
      else{
        maxq.push(n);
      }
      median = ((float)minq.top() +(float) maxq.top())/2;
    }
    else{
      if(n > median){
        minq.push(n);
        median = (float)minq.top();
      }
      else{
        maxq.push(n);
        median = (float)maxq.top() ;
      }
    }
    cout<<"Median: "<<median<<endl;
  }


}
