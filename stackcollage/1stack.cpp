#include <iostream>
using namespace std;

class name{
    public:
    int top=-1;
    static const int size=5;
    int a[size]={};

    void push(int value){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        a[top]=value;
    }

    void pop(){
        if(top==-1){
            cout<<"stack empty"<<endl;
            return;
        }
        a[top]=-1;
        top--;
    }
    
    void tops(){
        if(top==-1){
            cout<<"stack empty"<<endl;
            return;
        }
        cout<<a[top];
    }
};
int main(){
    name s;
    s.push(10);
    s.push(45);
    s.push(34);
    s.push(56);
    s.pop();
    for(int i=0;i<=s.top;i++){
        cout<<s.a[i]<<" ";
    }
    cout<<endl;
    s.tops();
    return 0;
}