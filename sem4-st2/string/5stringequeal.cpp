#include <iostream>
using namespace std;
int main(){
    string s1="Mohit";
    string s2="Mohid";
    bool flag=true;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            flag=false;
            break;
        }
    }

    if(flag){
        cout<<"String equal";
    }
    else{
        cout<<"not equal";
    }
    return 0;
}