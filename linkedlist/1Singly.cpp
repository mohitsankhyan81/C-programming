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

void insertintoHead(Node*& Head,int val){
  Node* n=createNode(val);
  n->next=Head;
  Head=n;
}

void display(Node* Head){
  while(Head!=NULL){
    cout<<Head->data<<" -> ";
    Head=Head->next;
  }
  cout<<"NULL";
}
int main(){
  Node* Head=NULL;
  insertintoHead(Head,34);
  insertintoHead(Head,45);
  display(Head);
  return 0;
}