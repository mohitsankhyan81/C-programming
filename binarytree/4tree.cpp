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


class binarytree{
    public:
        Node* root;
        binarytree(){
            root=NULL;
        }

        Node* createtree(){
            int x;
            cout<<"Enter the -1 for no Node: ";
            cin>>x;
            if(x==-1){
                return NULL;
            }
            Node* temp=new Node(x);
            cout<<"Enter left child at "<<x<<endl;
            temp->left=createtree();
            cout<<"Enter right child at "<<x<<endl;
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
    binarytree t;
    cout<<"Binary tree\n";
    t.root=t.createtree();

    cout<<"Inorder Traversel"<<endl;;
    t.inorder(t.root);
    return 0;
}