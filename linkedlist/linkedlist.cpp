#include <iostream>
using namespace std;

//define Node
struct Node
{
  int data;
  Node* next=NULL;
};

// create new Node
Node* createNode(int val){
  Node* n=new Node();
  n->data=val;
  n->next=NULL;
  return n;
}

//insert into the front of the linked list
void insertintoHead(Node* &Head,int val){
  Node* n=createNode(val);
  n->next=Head;
  Head=n;
}

//insert into the end of the linked list
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

//delete the element of the linked list from the front side
void deleteFromHead(Node*& Head){

  if(Head==NULL){
    return;
  }

  Node* temp=Head;
  Head=Head->next;
  delete temp;
}

//reverse the linked list
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

//search the linkd list 
int search(Node* Head,int key){
  int pos=1;
  while(Head!=NULL){
    if(Head->data==key){
      return pos;
    }
    Head=Head->next;
    pos++;
  }
  return -1;
}

//length of the linked list
int length(Node* Head){
  int len=0;
  while(Head!=NULL){
    len++;
    Head=Head->next;
  }
  return len;
}

//display the linked list
void display(Node* Head){
  while(Head!=NULL){
    cout<<Head->data<<" -> ";
    Head=Head->next;
  }
  cout<<"NULL"<<endl;
}

//define main
int main(){
  Node* Head=NULL;
  insertintoHead(Head,45);
  insertintoHead(Head,56);
  insertintoEnd(Head,23);
  insertintoEnd(Head,34);
  display(Head);
  cout<<"Length of the linked list :- "<<length(Head)<<endl;
  deleteFromHead(Head);
  display(Head);

  Head=reverse(Head);
  display(Head);

  int pos=search(Head,34);
  if(pos!=-1){
    cout<<"Node found :- "<<pos<<endl;
  }
  else{
    cout<<"Node Not Found "<<endl;
  }
  return 0;
}