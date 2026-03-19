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
};

int main(){
    Node* h1=new Node(10);
    cout<<h1->data<<endl;
    cout<<h1->next;
    return 0;
}