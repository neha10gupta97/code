#include<bits/stdc++.h>
using namespace std;

// Method 2
// push the first element, starting with sec compare it with st.top() if less then nextgreaterelement for st.top() is next.
// For each element pop ele from st till they are less and mark their nextgreaterelement next,
// All the remaining element at the end are element with no nextgreaterelement => -1

void nextgreaterelement(vector<int>arr,int n){
  stack<int> st;
  vector<int>ans(n);
  int i;
  for(i=n-1;i>=0;i--){
    if(i==n-1){
      ans[i]=-1;
    }
    else{
      if(!st.empty() && st.top()>arr[i]){
        ans[i]=st.top();
      }
      else{
        int f = 0;
        while(!st.empty()){
          if(st.top()<=arr[i])
            st.pop();
          else{
            ans[i]=st.top();
            f=1;
            break;
          }
        }
        if(!f){
          ans[i]=-1;
        }
      }
    }
    st.push(arr[i]);
  }
  cout<<"Given array: ";
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Next greater element array: ";
  for(i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  nextgreaterelement(arr,n);
}
