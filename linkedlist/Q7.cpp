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

void deleteformstart(Node* &Head){
    if(Head==NULL){
        return;
    }
    Node* temp=Head;
    Head=Head->next;
    delete temp;
}

void deleteFromEnd(Node* &Head){
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

int getlength(Node* Head){
    int len=0;
    while(Head!=NULL){
        len++;
        Head=Head->next;
    }
    return len;
}

int getmid(Node* Head){
    int length=getlength(Head);
    int mid=length/2;

    Node* temp=Head;
    while(mid--){
        temp=temp->next;
    }
    return temp->data;
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

int search(Node* &Head,int key){
    int pos=0;
    while(Head!=NULL){
        if(Head->data==key){
            return pos;
        }
        pos++;
        Head=Head->next;
    }
    return -1;
}

void deleteElementbyvalue(Node* &Head,int key){
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
    while(temp->next!=NULL&&temp->next->data!=key){
        temp=temp->next;
    }

    if(temp->next!=NULL){
        Node* del=temp->next;
        temp->next=temp->next->next;
        delete del;
    }
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
    insertintoHead(Head,45);
    insertintoEnd(Head,23);
    deleteformstart(Head);
    deleteFromEnd(Head);
    insertintoEnd(Head,67);
    insertintoHead(Head,22);
    insertintoEnd(Head,22);
    display(Head);
    cout<<"Length of the linked list is "<<getlength(Head)
    <<endl;
    cout<<"middle element is "<<getmid(Head)<<endl;
    
    deleteElementbyvalue(Head,22);
    display(Head);
    Head=reverse(Head);
    display(Head);

    int pos=search(Head,22);
    if(pos!=-1){
        cout<<"Element 22 found at "<<pos<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }


    return 0;
}