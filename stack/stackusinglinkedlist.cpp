#include <iostream>
using namespace std;

const int MAX=5;
int stack[MAX];
int top=-1;

void push(int val){
    if(top==MAX-1){
        cout<<"stack overflow\n";
        return;
    }
    stack[++top]=val;
}

void pop(){
    if(top==-1){
        cout<<"stack underflow\n";
        return;
    }
    top--;
}

int peek(){
    if(top==-1){
        cout<<"stack empty\n";
        return -1;
    }
    return stack[top];
}
int main(){
    pop();
    push(45);
    push(56);
    push(23);
    cout<<peek()<<endl;
    pop();
    cout<<peek()<<endl;
    return 0;
}