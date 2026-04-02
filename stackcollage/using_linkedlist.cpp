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
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=newNode;
        }
        else{
            newNode->next=Head;
            Head=newNode;
        }
    }

    static void deletefromhead(Node*& Head){
        if(Head==NULL){
            return;
        }
        Node* temp=Head;
        Head=Head->next;
        delete temp;
    }
    static void display(Node* Head){
        Node* temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    static void top(Node* Head){
        Node* temp=Head;
        int top;
        top=Head->data;
        cout<<top<<endl;
    }
};

int main(){
    Node* Head=NULL;
    Node::insertintohead(Head,45);
    Node::insertintohead(Head,56);
    Node::insertintohead(Head,78);
    Node::deletefromhead(Head);
    Node::top(Head);
    Node::display(Head);
    return 0;
}