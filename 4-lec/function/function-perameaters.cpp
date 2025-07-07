#include <iostream>
using namespace std;
int name(int a,int b){
    return a+b;
}
int main(){
    int a;
    cout<<"enter value of a";
    cin>>a;
    int b;
    cout<<"enter valur of b";
    cin>>b;
    int val=name(a,b);
    cout<<"sum is  "<<val<<endl;
}