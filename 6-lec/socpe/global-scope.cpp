//global scope is like that

#include <iostream>
using namespace std;
int x=10;//this x is global variable we use this variable any where in code
int main1(){
    cout<<"x in function "<<x<<endl;
}
int main(){
    main1();
    cout<<"x is"<<x<<endl;
}