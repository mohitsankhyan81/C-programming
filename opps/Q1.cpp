//what is opps ans what is the basic code of opps in c++


#include <iostream>
using namespace std;
class myClass{
    public:
    int myname;
    string mystring;
};

int main(){
    myClass myObject;
    
    myObject.myname=15;
    myObject.mystring="My name is mohit sankhyan and i am from kalka";
    
    cout<<myObject.myname<<endl;
    cout<<myObject.mystring<<endl;
}