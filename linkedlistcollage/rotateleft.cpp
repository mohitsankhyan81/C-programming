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
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    static void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
    static Node* rotateleft(Node* head,int k){
        if(!head || k==0){
            return head;
        }
        
        Node* curr=head;
        int count=1;
        while(count<k && curr!=NULL){
            curr=curr->next;
            count++;
        }
        if(curr==NULL){
            return head;
        }

        Node* kthNode=curr;
        Node* newNode=curr->next;

        if(newNode==NULL){
            return head;
        }
        kthNode->next=NULL;
        Node* temp=newNode;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return newNode;
    }
};
int main(){
    Node* head=NULL;
    Node::insertintohead(head,34);
    Node::insertintohead(head,23);
    Node::insertintohead(head,78);
    Node::insertintohead(head,45);
    Node::insertintohead(head,56);
    Node::insertintohead(head,11);
    Node::display(head);

    head=Node::rotateleft(head,4);
    Node::display(head);
    return 0;
}