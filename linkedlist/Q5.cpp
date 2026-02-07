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

void deleteintoHead(Node* &Head){
    if(Head==NULL){
        return;
    }
    Node* temp=Head;
    Head=Head->next;
    delete temp;
}

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
    cout<<"NULL\n";
}

int search(Node* Head,int val){
    int pos=0;
    while(Head!=NULL){
        if(Head->data==val){
            return pos;
        }
        Head=Head->next;
        pos++;
    }
    return -1;
}
int main(){
    Node* Head=NULL;
    insertintoHead(Head,34);
    insertintoHead(Head,23);
    insertintoEnd(Head,45);
    deleteintoHead(Head);
    deletefromEnd(Head);
    insertintoHead(Head,56);
    display(Head);
    int pos=search(Head,56);
    if(pos!=-1){
        cout<<"pos of 34 is "<<pos<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    cout<<"The length of the linked list is "<<length(Head)<<endl;
    Head=reverse(Head);
    display(Head);
    return 0;
}