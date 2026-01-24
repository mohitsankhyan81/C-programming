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

void insertintoEnd(Node*& Head,int val){
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

void deleteatHead(Node*& Head){
  if(Head==NULL){
    return ;
  }
  Node* temp=Head;
  Head=Head->next;
  delete temp;
}

Node* reverse(Node* Head){
  Node* prev=NULL;
  Node* curr=Head;
  Node* next;

  while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  return prev;
}


void display(Node* Head){
  while(Head!=NULL){
    cout<<Head->data<<" -> ";
    Head=Head->next;
  }
  cout<<"NULL"<<endl;
}

int main(){
  Node* Head=NULL;
  insertintoHead(Head,45);
  insertintoEnd(Head,76);
  display(Head);
  Head=reverse(Head);
  display(Head);
  return 0;
}