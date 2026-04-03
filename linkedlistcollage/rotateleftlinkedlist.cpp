//rotate left linked list
// 1 → 2 → 3 → 4 → 5, k = 2
// Result: 3 → 4 → 5 → 1 → 2

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
        if(head==NULL|| k==0){
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
        Node* NewNode=curr->next;

        if(NewNode==NULL){
            return head;
        }
        kthNode->next=NULL;
        Node* temp=NewNode;

        while(temp->next!=NULL){
            temp=temp->next;
        }

        temp->next=head;
        return NewNode;
    }
};
int main(){
    Node* head=NULL;
    Node::insertintohead(head,45);
    Node::insertintohead(head,23);
    Node::insertintohead(head,34);
    Node::insertintohead(head,11);
    Node::insertintohead(head,3);
    Node::insertintohead(head,17);
    Node::display(head);

    head=Node::rotateleft(head,4);
    Node::display(head);
    return 0;
}