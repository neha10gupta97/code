#include<bits/stdc++.h>
using namespace std;

vector<int> findMode(TreeNode* root){
  int mfreq=0,c=0;
  int prev;
  mostfreq(root,mfreq,root,c);
  cout<<mfreq<<endl;
}

void mostfreq(TreeNode* root, int &mfreq, int &prev, int &c){
  if(!root)
    return;
  mostfreq(root->left,mfreq,prev,c);
  if(c && root->val == prev)
    c++;
  else
    c=1;
  mfreq=max(mfreq,c);
  mostfreq(root->right,mfreq,root->val,c);
}
