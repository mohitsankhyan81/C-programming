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

class BinaryTree{
    public:
        Node* root;
        BinaryTree(){
            root=NULL;
        }
        
        Node* createtree(){
            int x;
            cout<<"Enter -1 for the no node: "<<endl;
            cin>>x;

            if(x==-1){
                return NULL;
            }
            Node* temp=new Node(x);
            cout<<"Enter the value of left part "<<x<<endl;
            temp->left=createtree();
            cout<<"Enter the value of right part "<<x<<endl;
            temp->right=createtree();

            return temp;
        }

        void inorder(Node* temp){
            if(temp==NULL){
                return;
            }
            inorder(temp->left);
            cout<<temp->data<<" ";
            inorder(temp->right);
        }
};
int main(){
    BinaryTree t;
    cout<<"Binary Tree"<<endl;
    t.root=t.createtree();
    cout<<"Inorder traverse"<<endl;
    t.inorder(t.root);
    return 0;
}