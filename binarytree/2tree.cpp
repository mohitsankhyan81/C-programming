#include <iostream>
using namespace std;
#define capacity 100
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
                cout<<"Stack overflow";
                return;
            }
            size++;
            if(size==0){
                root=0;
            }
            arr[size]=val;
        }

        void deleteval(){
            if(size==-1){
                cout<<"stack underflow";
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
    t1.insert(23);
    t1.insert(34);
    t1.insert(11);
    t1.insert(55);
    t1.deleteval();
    t1.display();
    return 0;
}