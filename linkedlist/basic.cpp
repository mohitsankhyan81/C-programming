#include <iostream>
using namespace std;

class Stack{
    private:
        int * arr;
        int top;
        int size;
    public:
    //constructor
        Stack(int capacity){
            size=capacity;
            top=-1;
            arr=new int(size);
        }

        void push(int val){
            if(top>=size-1){
                cout<<"Stack overflow\n";
                return;
            }
            top++;
            arr[top]=val;
        }
        void pop(){
            if(top==-1){
                cout<<"stack underflow\n";
            }
            top--;
        }

        int ttop(){
            if(top==-1){
                cout<<"stack is empty";
                return -1;
            }
            return arr[top];
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }
            return false;
        }

        void display(){
            if(top==-1){
                cout<<"Stack is emplty";
                return;
            }
            cout<<"Stack elementss (Top to bottam) : ";
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main(){
    Stack s(5);
    s.push(34);
    s.push(45);
    s.display();
    return 0;
}