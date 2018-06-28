#include<bits/stdc++.h>
using namespace std;

main(){
  int n,i;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];

  int count =0;
  int j,k;
  for(i=0;i<n-2;i++){
    int k=i+2;
    for(j=i+1;j<n-1;j++){
      while(k<n && arr[i]+arr[j]>arr[k])
        k++;

      count+=(k-j-1 );
      // if(k-j-1 > 0)
      //   cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
    }
  }
  cout<<"total triangles: "<<count<<endl;
}
