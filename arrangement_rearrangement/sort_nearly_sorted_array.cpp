// Method1: Insertion sort
// Time complexity: O(nk)
// as any element is k distance away => inner while loop will run atmost k times each time;

#include<bits/stdc++.h>
using namespace std;

class Minheap{
  int *harr;
  int h_size;
public:
  Minheap(int harr[],int h_size);  //Constructor
  void minheapify(int i );
  int left(int i){
    return(2*i+1);
  }
  int right(int i){
    return(2*i+2);
  }
  int replaceMin(int x);
  int extractmin();
};

void sortk(vector<int>&arr,int n,int k){
  int i;
  int *harr=new int[k+1];
  for(i=0;i<k+1&&i<n;i++)
    harr[i]=arr[i];
  Minheap mh(harr,k+1);
  int j=0;
  for(i=k+1;j<n;i++,j++){
    if(i<n)
      arr[j]=mh.replaceMin(arr[i]);
    else
      arr[j]=mh.extractmin();
  }
}

Minheap:: Minheap(int h[],int m){
  h_size=m;
  harr=h;
  int i=(m-1)/2;
  while(i>=0){
    minheapify(i);
    i--;
  }
}

void Minheap:: minheapify(int i){
  int l=left(i);
  int r=right(i);
  int small=i;
  if(l<h_size&&harr[l]<harr[small])
    small=l;
  if(r<h_size && harr[r]<harr[small])
    small=r;
  if(small!=i){
    swap(harr[i],harr[small]);
    minheapify(small);
  }
}

int Minheap:: replaceMin(int x){
  int root=harr[0];
  harr[0]=x;
  if(root<x)
    minheapify(0);
  return root;
}

int Minheap:: extractmin(){
  int root=harr[0];
  if(h_size>1){
    harr[0]=harr[h_size-1];
    h_size--;
    minheapify(0);
  }
  return root;
}

main(){
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  int k;
  cin>>k;
  sortk(arr,n,k);
  cout<<"Array after insertion sort: ";
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
