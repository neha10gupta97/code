#include<bits/stdc++.h>
using namespace std;

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  int count=1,ele=arr[0];
  for(i=1;i<n;i++){
    if(arr[i]==ele)
      count++;
    else
      count--;
    if(count==0){
      ele = arr[i];
      count=1;
    }
  }
  count=0;
  for(i=0;i<n;i++){
    if(arr[i]==ele)
      count++;
    if(count>n/2)
      break;
  }
  if(count>n/2){
    cout<<"Majority element ";
    cout<<ele<<endl;
  }
  else
    cout<<"No majority element\n";
}
