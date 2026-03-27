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

    static void insertintohead(Node*& Head,int val){
        Node* NN=new Node(val);
        if(Head==NULL){
            Head=NN;
        }
        else{
            NN->next=Head;
            Head=NN;;
        }
    }

    static void insertintoend(Node*& Head,int val){
        Node* NN=new Node(val);
        if(Head==NULL){
            Head=NN;
            return;
        }
        Node* temp=Head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=NN;
    }

    static void insertintopos(Node*& Head,int val,int pos){
        if(pos<0){
            cout<<"invalid Position";
            return;
        }
        if(Head==NULL){
            insertintohead(Head,val);
            return;
        }
        Node* temp=Head;
        int count=1;
        while(count<pos-1 && temp!=NULL){
            temp=temp->next;
            count++;
        }
        Node* nn=new Node(val);
        nn->next=temp->next;
        temp->next=nn;
    }

    static void deleteathead(Node*& Head){
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

    static void deletefromposition(Node* Head,int pos){
        if(pos<0){
            cout<<"invalid pos";
            return;
        }
        if(pos==1){
            deleteathead(Head);
            return;
        }
        Node* temp=Head;
        int count=1;
        while(count<pos-1&&temp!=NULL){
            temp=temp->next;
            count++;
        }

        Node* curr=temp->next;
        temp->next=curr->next;
        curr->next=NULL;
        delete curr;
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
    Node::insertintohead(Head,23);
    Node::insertintohead(Head,57);
    Node::insertintoend(Head,11);
    Node::insertintopos(Head,99,2);
    Node::insertintoend(Head,45);
    Node::deleteathead(Head);
    Node::deletefromend(Head);
    Node::deletefromposition(Head,2);
    Node::display(Head);
    return 0;
}