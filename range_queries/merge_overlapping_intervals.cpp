#include<bits/stdc++.h>
using namespace std;

//Can be done using stack after sorting to merge intervals

main(){
  int n,k,i;
  cin>>n;
  vector<pair<int,int> >arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i].first>>arr[i].second;

    sort(arr.begin(),arr.end());

    vector<pair<int,int> >ans;
    pair<int,int>temp = arr[0];

    for(i=1;i<n;i++){
      if(temp.second>arr[i].first){
        temp.second = max(temp.second,arr[i].second);
      }
      else{
        ans.push_back(temp);
        temp = arr[i];
      }
    }
    ans.push_back(temp);
    int len = ans.size();
    cout<<"Merged intervals: ";
    for(i=0;i<len;i++)
      cout<<"{ "<<ans[i].first<<", "<<ans[i].second<<"} ";
    cout<<endl;
}
