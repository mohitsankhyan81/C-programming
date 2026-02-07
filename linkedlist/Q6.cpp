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

int getlength(Node* Head){
    int len=0;
    while(Head!=NULL){
        len++;
        Head=Head->next;
    }
    return len;
}

void deletebyvalue(Node* &Head, int key){
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
    while(temp->next!=NULL&& temp->next->data!=key){
        temp=temp->next;
    }

    if(temp->next!=NULL){
        Node* del=temp->next;
        temp->next=temp->next->next;
        delete del;
    }
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
void display(Node* Head){
    while(Head!=NULL){
        cout<<Head->data<<" -> ";
        Head=Head->next;
    }
    cout<<" NULL "<<endl;
}

int main(){
    Node* Head=NULL;
    insertintoHead(Head,34);
    insertintoHead(Head,67);
    insertintoEnd(Head,45);
    insertintoEnd(Head,57);
    deleteintoHead(Head);
    deletefromEnd(Head);
    insertintoEnd(Head,67);
    deletebyvalue(Head,67);
    display(Head);

    int pos=search(Head,45);
    if(pos!=-1){
        cout<<"Pos of 45 is "<<pos<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    int middle=getmid(Head);
    cout<<"Middle of the linked list"<<middle<<endl;

    cout<<"Length of the linked list is "<<getlength(Head)<<endl;
    Head=reverse(Head);
    display(Head);
    return 0;
}