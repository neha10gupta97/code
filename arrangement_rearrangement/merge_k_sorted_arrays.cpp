#include<bits/stdc++.h>
using namespace std;

struct heapnode{
  int ele;
  int i,j;
};

class heap{
  heapnode *hp;
  int size;
public:
  heap(heapnode a[],int size);
  void minheapify(int);
  int left(int i){
    return 2*i+1;
  }
  int right(int i){
    return 2*i+2;
  }
  heapnode getMin(){
    return hp[0];
  }
  void replaceMin(heapnode x){
    hp[0] = x;
    minheapify(0);
  }
};

heap::heap(heapnode h[],int n){
  size = n;
  hp =h;
  int i = (n-1)/2;
  while(i>=0){
    minheapify(i);
    i--;
  }
}

void swap(heapnode &a, heapnode &b){
  heapnode c = a;
  a=b;
  b=c;
}

void heap::minheapify(int i){
  int l = left(i);
  int r = right(i);
  int s =i;
  if(l<size && hp[l].ele<hp[s].ele)
    s=l;
  if(r<size && hp[r].ele<hp[s].ele)
    s=r;
  if(s != i){
    swap(hp[i],hp[s]);
    minheapify(s);
  }
}

vector<int> merge(vector<vector<int> >arr,int n,int m){
  heapnode *harr = new heapnode[n];
  vector<int> ans(n*m);
  int i,j;
  for(i=0;i<n;i++){
    harr[i].ele = arr[i][0];
    harr[i].i = i;
    harr[i].j = 1;
  }
  heap hp(harr,n);
  int count;
  for(count=0;count<n*m;count++){
    heapnode temp =hp.getMin();
    ans[count]=temp.ele;

    if(temp.j<m){
      temp.ele = arr[temp.i][temp.j];
      temp.j++;
    }
    else
      temp.ele =INT_MAX;
    hp.replaceMin(temp);
  }
  return ans;
}



main(){
  int n,m,i,j;
  cin>>n>>m;
  vector<vector<int> >arr(n,vector<int>(m));
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  vector<int>ans = merge(arr,n,m);
  cout<<"Merged k sorted arrays: ";
  for(i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
  cout<<endl;
}
