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

    static void insertintoHead(Node*& Head,int val){
        Node* nn=new Node(val);
        if(Head==NULL){
            Head=nn;
        }
        else{
            nn->next=Head;
            Head=nn;
        }
    }

    static void insertintoend(Node*& Head,int val){
        Node* nn=new Node(val);
        if(Head==NULL){
            Head=nn;
            return;
        }

        Node* temp=Head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=nn;
    }

    static void insertintopos(Node*& Head,int val,int pos){
        if(pos<0){
            cout<<"invalid pos";
            return;
        }
        if(pos==1){
            insertintoHead(Head,val);
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

    static void deletebypos(Node*& Head,int pos){
        if(pos<0){
            cout<<"invalid position"<<endl;
            return;
        }
        if(pos==1){
            deletefromhead(Head);
            return;
        }
        Node* temp=Head;
        int count=1;
        while(count<pos-1 && temp!=NULL){
            temp=temp->next;
            count++;
        }
        Node* curr=temp->next;
        temp->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

    static Node* reverse(Node* Head){
        Node* curr=Head;
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

    static void search(Node* Head,int key){
        Node* temp=Head;
        bool found=false;
        int count=1;
        while(temp!=NULL){
            if(temp->data==key){
                cout<<temp->data<<" pos "<<count<<endl;
                found=true;
                return;
            }
            count++;
            temp=temp->next;
        }
        if(!found){
            cout<<"not found"<<endl;
        }
    }
    static void getmiddle(Node* Head){
        Node* slow=Head;
        Node* fast=Head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        cout<<slow->data<<endl;
    }

    static void display(Node* Head){
        Node* temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<" NULL "<<endl;
    }
};
int main(){
    Node* Head=NULL;

    Node::insertintoHead(Head,45);
    Node::insertintoend(Head,67);
    Node::insertintoHead(Head,11);
    Node::insertintopos(Head,22,2);
    Node::insertintoend(Head,9);
    Node::insertintoHead(Head,9);
    Node::deletefromhead(Head);
    Node::deletefromend(Head);
    Node::deletebypos(Head,2);
    Node::display(Head);
    Node::getmiddle(Head);
    Node::search(Head,67);
    Head=Node::reverse(Head);
    Node::display(Head);


    return 0;
}