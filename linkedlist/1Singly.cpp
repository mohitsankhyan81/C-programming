#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next=NULL;
};

Node* createNode(int val){
  Node* n=new Node();
  n->data=val;
  n->next=NULL;
  return n;
}

void insertintoHead(Node*& head,int val){
  Node* n=createNode(val);
  n->next=head;
  head=n;
}

void display(Node* head){
  while(head!=NULL){
    cout<<head->data<<" -> ";
    head=head->next;
  }
  cout<<"NULL";
}
int main(){
  Node* head=NULL;
  insertintoHead(head,34);
  insertintoHead(head,54);
  display(head);
  return 0;
}