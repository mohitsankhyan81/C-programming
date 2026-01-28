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

void deleleintoHead(Node* &Head){
  if(Head==NULL){
    return;
  }
  
  Node* temp=Head;
  Head=Head->next;
  delete temp;
}

void deleteintoend(Node*& Head){
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

Node* reverse(Node* &Head){
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

Node* getMiddle(Node* Head){
  if(Head==NULL){
    return NULL;
  }
  
  Node* slow=Head;
  Node* fast=Head;

  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
  }
  return slow;
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
  insertintoHead(Head,23);
  insertintoEnd(Head,99);
  insertintoEnd(Head,11);
  deleleintoHead(Head);
  deleteintoend(Head);
  insertintoEnd(Head,23);
  insertintoHead(Head,78);
  // insertintoHead(Head,65);
  display(Head);

  Head=reverse(Head);
  display(Head);

  int pos=search(Head,99);
  if(pos!=-1){
    cout<<"Element found at "<<pos<<endl;
  }
  else{
    cout<<"Not found"<<endl;
  }

  cout<<"The length of the linked list is "<<length(Head)<<endl;

  Node* mid=getMiddle(Head);
  if(mid){
    cout<<"Midd value in linked list is "<<mid->data<<endl;
  }
  return 0;
}