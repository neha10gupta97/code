#include<bits/stdc++.h>
using namespace std;

vector<int>findMode(TreeNode* root){
  unordered_map<int,int> map;
  vector<int>ans;
  int mfreq=mostfreq(root,map);
  for(pair<int,int>p :map){
    if(p.second == mfreq)
      ans.push_back(p.first);
  }
  return ans;
}

int mostfreq(TreeNode* root,unordered_map<int,int>map){
  if(!root)
    return 0;
  if(map.find(root->val) ==map.end()){
    map.insert({root->val,1});
  }
  else
    map[root->val]++;
  return max(map[root->val],max(mostfreq(root->left),mostfreq(root->right)));
}
