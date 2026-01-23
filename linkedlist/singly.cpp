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

void insertintoHead(Node* &Head,int val){
  Node* n=createNode(val);
  n->next=Head;
  Head=n;
}

void insertintoEnd(Node* &Head,int val){
  Node* n=createNode(val);

  if(Head==NULL){
    Head=n;
    return;
  }

  Node* temp=Head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=n;
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
  insertintoHead(Head,45);
  insertintoHead(Head,46);
  insertintoEnd(Head,57);
  insertintoEnd(Head,78);
  display(Head);
  return 0;
}