#include<bits/stdc++.h>
using namespace std;

int mycomp(int a,int b){
  string x=to_string(a);
  string y=to_string(b);
  return x.append(y) > y.append(x);
}

void biggestno(vector<int> &arr,int n){
  sort(arr.begin(),arr.end(),mycomp);
}

main(){
  int n,i;
  cin>>n;
  vector<int> arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  biggestno(arr,n);
  cout<<"Biggest number: ";
  for(i=0;i<n;i++)
    cout<<arr[i];
  cout<<endl;
}
