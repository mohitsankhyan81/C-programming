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
        Node* createTree(){
            int x;
            cout<<"Enter -1 to No Node: ";
            cin>>x;
            if(x==-1){
                return NULL;
            }
            Node* temp=new Node(x);
            cout<<"Enter the value of left Node "<<x<<endl;
            temp->left=createTree();
            cout<<"Enter the value of right Node "<<x<<endl;
            temp->right=createTree();

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
    cout<<"Binary tree: "<<endl;
    t.root=t.createTree();
    cout<<"Inorder "<<endl;
    t.inorder(t.root);

    return 0;
}