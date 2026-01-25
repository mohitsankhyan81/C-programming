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

void deletefromHead(Node*& Head){
  if(Head==NULL){
    return;
  }
  Node* temp=Head;
  Head=temp->next;
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

int search(Node* Head,int key){
  int pos=1;
  while(Head!=NULL){
    if(Head->data==key){
      return pos;
    }
    pos++;
    Head=Head->next;
  }
  return -1;
}

int length(Node* Head){
  int len=0;
  while(Head!=NULL){
    len++;
    Head=Head->next;
  }
  return len;
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
  insertintoHead(Head,67);
  insertintoHead(Head,78);
  insertintoEnd(Head,56);
  insertintoEnd(Head,76);
  deletefromHead(Head);
  display(Head);
  cout<<"length of the linked list is "<<length(Head)<<endl;

  Head=reverse(Head);
  display(Head);

  int pos=search(Head,67);
  if(pos!=-1){
    cout<<"Element found at "<<pos<<endl;
  }
  else{
    cout<<"Element not found"<<endl;
  }
  return 0;
}