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

void insertintoEnd(Node*& Head,int val){
  Node* n=createNode(val);

  if(Head==NULL){
    return;
  }

  Node* temp=Head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=n;
}

void deleteintoHead(Node*& Head){
  if(Head==NULL){
    return;
  }

  Node* temp=Head;
  Head=Head->next;
  delete temp;
}

void deleteintoEnd(Node*& Head){
  if(Head==NULL){
    return;
  }

  if(Head->next==NULL){
    delete Head;
    Head=NULL;
    return;
  }

  Node* temp=Head;
  while(temp->next->next!=NULL){
    temp=temp->next;
  }
  delete temp->next;
  temp->next=NULL;
}

Node* reverse(Node* Head){
  Node* perv=NULL;
  Node* curr=Head;
  Node* next;

  while(curr!=NULL){
    next=curr->next;
    curr->next=perv;
    perv=curr;
    curr=next;
  }
  return perv;
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
  insertintoHead(Head,34);
  insertintoHead(Head,46);
  insertintoEnd(Head,22);
  insertintoEnd(Head,78);
  insertintoHead(Head,56);
  insertintoEnd(Head,11);
  deleteintoHead(Head);
  deleteintoEnd(Head);
  display(Head);

  Head=reverse(Head);
  display(Head);

  int pos=search(Head,46);
  if(pos!=-1){
    cout<<"Element at "<<pos<<endl;
  }
  else{
    cout<<"Not Found"<<endl;
  }

  cout<<"Length of the linked list "<<length(Head)<<endl;
  return 0;
}