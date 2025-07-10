// Find character lowercase or uppercase

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter A char";
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"Lower Case"<<endl;
    }
    else{
        cout<<"Upper Case";
    }
}