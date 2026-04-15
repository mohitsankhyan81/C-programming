#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }

    static void insertintohead(Node*& head,int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }

    static void insertintoend(Node*& head,int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }

        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    static void insertatposition(Node*& head,int val,int pos){
        if(pos<0){
            cout<<"Invalid position";
            return;
        }

        if(pos==1){
            insertintohead(head,val);
            return;
        }
        Node* temp=head;
        int count=1;

        while(temp!=NULL && count<pos-1){
            count++;
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"Invalid possition";
            return;
        }

        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    static void deletefromhead(Node*& head){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    static void deletefromend(Node*& head){
        if(head==NULL){
            return;
        }
        
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }

    static void deleteformpos(Node*& head,int pos){
        if(pos<0){
            cout<<"invlid position";
            return;
        }
        if(pos==1){
            deletefromhead(head);
            return;
        }
        int count=1;
        Node* temp=head;
        while(temp!=NULL && count<pos-1){
            temp=temp->next;
        }
    
        Node* curr=temp->next;
        temp->next=curr->next;
        delete curr;
    }

    static Node* reverse(Node*& head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    static void getmiddle(Node*& head){
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<"Middle element is "<<slow->data<<endl;
    }

    static void getlength(Node*& head){
        Node* temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        cout<<"length of the linked list is "<<length;
    }

    static void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    Node* head=NULL;
    Node::insertintohead(head,45);
    Node::insertintohead(head,23);
    Node::insertintoend(head,67);
    Node::insertintoend(head,11);
    Node::insertatposition(head,44,2);
    Node::insertatposition(head,56,4);
    Node::deletefromhead(head);
    Node::deletefromend(head);
    Node::deleteformpos(head,2);
    Node::display(head);
    head=Node::reverse(head);
    Node::display(head);
    Node::getmiddle(head);
    Node::getlength(head);
    return 0;
}