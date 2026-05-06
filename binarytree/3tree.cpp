#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

class tree{
    public:
        Node* root;
        tree(){
            root=NULL;
        }
};
int main(){
    tree t;
    t.root=new Node(33);
    t.root->left=new Node(34);
    t.root->right=new Node(44);

    cout<<t.root->data<<" ";
    cout<<t.root->left->data<<" ";
    cout<<t.root->right->data<<" ";
    return 0;
}