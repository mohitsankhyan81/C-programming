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

    static void insertintoHead(Node*& Head,int val){
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=newNode;
        }
        else{
            newNode->next=Head;
            Head=newNode;
        }
    }

    static void insertintoEnd(Node*& Head,int val){
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
        if(pos==1){
            insertintoHead(Head,val);
            return;
        }

        Node* temp=Head;
        int count=1;
        while(count<pos-1 && temp!=NULL){
            count++;
            temp=temp->next;;
        }

        if(temp==NULL){
            cout<<"invalid possion";
            return;
        }

        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    static void display(Node* Head){
        Node* temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }     
        cout<<" NULL ";   
    }
};
int main(){
    Node* Head=NULL;
    Node::insertintoHead(Head,45);
    Node::insertintoHead(Head,23);
    Node::insertintoEnd(Head,99);
    Node::insertintopos(Head,34,2); 
    Node::display(Head);
    return 0;
}