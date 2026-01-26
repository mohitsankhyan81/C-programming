#include <iostream>
using namespace std;

//define Node
struct Node{
  int data;
  Node* next=NULL;
};

//create new node
Node* createNode(int val){
  Node* n=new Node();
  n->data=val;
  n->next=NULL;
  return n;
}

//insert into the head
void insertintoHead(Node* &Head,int val){
  Node* n=createNode(val);
  n->next=Head;
  Head=n;
}

//insert into the end 
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

//delete from the head
void deletefromHead(Node* &Head){
  if(Head==NULL){
    return;
  }

  Node* temp=Head;
  Head=Head->next;
  delete temp;
}

//delete from the end
void deletefromEnd(Node* &Head){
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

//delete by value
void deletebyvalue(Node* &Head,int key){
  if(Head==NULL){
    return;
  }
  if(Head->data==key){
    Node* t=Head;
    Head=Head->next;
    delete t;
    return;
  }
  Node* temp=Head;
  while(temp->next!=NULL && temp->next->data!=key){
    temp=temp->next;
  }

  if(temp->next!=NULL){
    Node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
  }
}

//reverse linked list
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

//search Node
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

//length Node
int length(Node* Head){
  int len=0;
  while(Head!=NULL){
    len++;
    Head=Head->next;
  }
  return len;
}

//display the nodes
void display(Node* Head){
  while(Head!=NULL){
    cout<<Head->data<<" -> ";
    Head=Head->next;
  }
  cout<<"NULL"<<endl;
}

int main(){
  Node* Head=NULL;
  insertintoHead(Head,56);
  insertintoHead(Head,32);
  insertintoHead(Head,78);
  insertintoEnd(Head,76);
  insertintoEnd(Head,33);
  insertintoHead(Head,57);
  deletefromHead(Head);
  deletefromEnd(Head);
  deletebyvalue(Head,56);
  display(Head);
  cout<<"Length of the linked list "<<length(Head)<<endl;
  int pos=search(Head,32);
  if(pos!=-1){
    cout<<"Element found at "<<pos<<endl;
  }
  else{
    cout<<"Element not found"<<endl;
  }

  Head=reverse(Head);
  display(Head);
  return 0;
}