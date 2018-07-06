#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node* next;
};

void insertatn(node** head,int n,int ele){
  node* temp = *head;
  int len=1;
  if(len==n){
    node* cur = new node();
    cur->data = ele;
    cur->next=(*head);
    *head = cur;
    return;
  }
  while(temp!=NULL){
    len++;
    if(len==n){
      node* cur = new node();
      cur->data = ele;
      cur->next = temp->next;
      temp->next = cur;
      return;
    }
    temp = temp->next;
  }
  cout<<n<<" > size of linked list\n";
}

void print(node* head){
  node* temp = head;
  while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
  }
  cout<<endl;
}

void push(node** head,int ele){
  node* cur = new node();
  cur->data = ele;
  cur->next=(*head);
  *head = cur;
}

main(){
  node* head = NULL;
  push(&head, 1);
  push(&head, 7);
  insertatn(&head,1,8);
  insertatn(&head,5,5);
  insertatn(&head,2,11);

  print(head);
}
