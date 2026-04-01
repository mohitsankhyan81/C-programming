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

    static void insertintoend(Node*& Head,int val){
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=newNode;
        }

        Node* temp=Head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    static void insertintopos(Node*& Head,int val,int pos){
        if(pos<0){
            cout<<"invalid position"<<endl;
            return;
        }
        if(pos==1){
            insertintohead(Head,val);
            return;
        }

        Node* temp=Head;
        int count=1;
        while(temp!=NULL && count<pos-1){
            temp=temp->next;
            count++;
        }
        if(temp==NULL){
            cout<<"invlaid position"<<endl;
            return;
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

    static void deletefrompos(Node*& Head,int pos){
        if(pos<0){
            cout<<"Invalid position";
            return;
        }
        if(pos==1){
            deletefromhead(Head);
            return;
        }
        Node* temp=Head;
        int count=1;
        while(temp!=NULL && count<pos-1){
            count++;
            temp=temp->next;
        }

        if(temp==NULL){
            cout<<"invalid position";
            return;
        }

        Node* curr=temp->next;
        temp->next=curr->next;
        delete curr;
    }
    
    static Node* reverse(Node* Head){
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

    static void getMiddle(Node* Head){
        Node* slow=Head;
        Node* fast=Head;

        while(fast &&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        cout<<slow->data<<endl;
    }

    static bool searchdata(Node* Head,int val){
        Node* temp=Head;
        while(temp!=NULL){
            if(temp->data==val){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

    static void listlength(Node* Head){
        int count=0;
        Node* temp=Head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        cout<<"List size is "<<count<<endl;
    }

    static void display(Node* Head){
        Node* temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main(){
    Node* Head=NULL;
    Node::insertintohead(Head,45);
    Node::insertintohead(Head,75);
    Node::insertintoend(Head,11);
    Node::insertintoend(Head,67);
    Node::insertintopos(Head,33,2);
    Node::insertintohead(Head,88);
    Node::insertintohead(Head,3);
    Node::insertintohead(Head,23);
    Node::deletefromhead(Head);
    Node::deletefromend(Head);
    Node::deletefrompos(Head,2);
    Node::display(Head);
    Node::getMiddle(Head);

    if(Node::searchdata(Head,75)){
        cout<<"elment found "<<endl;
    }
    else{
        cout<<"Not found ";
    }

    Node::listlength(Head);

    Head=Node::reverse(Head);
    Node::display(Head);

    return 0;
}