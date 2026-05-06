#include <iostream>
using namespace std;
class stack{
    int size;
    int top;
    int *arr;
    
    public:
        stack(){
            size=1000;
            top=-1;
            arr=new int[size];
        }

        void push(int val){
            if(top==size-1){
                cout<<"stack overflow";
            }
            top++;
            arr[top]=val;
            cout<<"push"<<arr[top]<<endl;
        }

        void pop(){
            if(top==-1){
                cout<<"stack underflow";
            }
            cout<<"pop "<<arr[top]<<endl;
            top--;
        }
        void tops(){
            if(top==-1){
                cout<<"stack under flow";
            }
            cout<<"top is "<<arr[top];
        }
};
int main(){
    stack d;
    d.push(44);
    d.push(45);
    d.pop();
    d.tops();

    return 0;
}