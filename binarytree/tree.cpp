#include <iostream>
#define capacity 100
using namespace std;

class tree{
    int size;
    int arr[capacity];
    int root;
    public:
        tree(){
            size=-1;
            root=-1;
            for(int i=0;i<capacity;i++){
                arr[i]=-1;
            }
        }

        void insert(int val){
            if(size==capacity-1){
                cout<<"tree is full"<<endl;
                return;
            }
            if(size==0){
                root=0;
            }
            size++;
            arr[size]=val;
        }

        void deleteval(){
            if(size==-1){
                cout<<"tree in underflow"<<endl;
                return;
            }
            size--;
            if(size==-1){
                root=-1;
            }
        }
        void display(){
            for(int i=0;i<=size;i++){
                cout<<arr[i]<<" ";
            }
        }
};
int main(){
    tree t1;
    t1.insert(34);
    t1.insert(44);
    t1.insert(12);
    t1.deleteval();
    t1.display();
    return 0;
}