#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;

    Node(int val){
        data=val;
        next=NULL;
    }

    static void insertintohead(Node*& Head,int val){
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=newNode;
        }
        else{
            newNode->next=Head;
            Head=newNode;
        }
    }

    static void insertintoend(Node*& Head,int val){
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=newNode;
            return;
        }

        Node* temp=Head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    static void insertintopos(Node*& Head,int val,int pos){
        if(Head==NULL){
            insertintohead(Head,val);
            return;
        }
        Node* temp=Head;
        int count=0;
        while(count<pos-1 && temp!=NULL){
            count++;
            temp=temp->next;
        }
        
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    static void deletefromhead(Node*& Head){
        if(Head==NULL){
            return;
        }

        Node* temp=Head;
        Head=Head->next;
        delete temp;
    }

    static void deletefromend(Node*& Head){
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

    static void display(Node* Head){
        Node* temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL";
    }


};
int main(){
    Node* Head=NULL;

    Node::insertintohead(Head,45);
    Node::insertintohead(Head,56);
    Node::insertintoend(Head,23);
    Node::insertintopos(Head,11,2);
    Node::deletefromhead(Head);
    Node::deletefromend(Head);
    Node::display(Head);
    return 0;
}