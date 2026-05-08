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

class binrayTree{
    public:
        Node* root;
        binrayTree(){
            root=NULL;
        }
        Node* createTree(){
            int x;
            cout<<"Enter -1 for the no node "<<endl;

            cin>>x;

            if(x==-1){
                return NULL;
            } 

            Node* temp=new Node(x);
            cout<<"Enter the value of left Node "<<x<<endl;
            temp->left=createTree();
            cout<<"Enter the value of the right Node "<<x<<endl;
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

    binrayTree t;
    cout<<"Binary tree"<<endl;
    t.root=t.createTree();
    cout<<"Inorder travercel"<<endl;
    t.inorder(t.root);
    return 0;
}