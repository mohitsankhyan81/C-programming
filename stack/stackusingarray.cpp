#include <iostream>
using namespace std;
const int MAX=5;
int stack[MAX];
int top=-1;

void push(int x){
    if(top==MAX-1){
        cout<<"Stack overflow";
        return;
    }
    stack[++top]=x;
}

void pop(){
    if(top==-1){
        cout<<"Stack underflow";
        return;
    }
    top--;
}

int peek(){
    if(top==-1){
        cout<<"Stack empty";
        return -1;
    }
    return stack[top];
}

int main(){
    push(34);
    push(46);
    push(31);

    cout<<peek()<<endl;
    pop();
    cout<<peek()<<endl;
    return 0;
}