#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1="mohit";
    string s2="mohit sankhyan";

    if(s1.size() != s2.size()){
        cout<<"String is not equal";
        return 0;
    }
    int i=0;
    bool flag=true;
    while(s1[i]!='\0'){
        if(s1[i]!=s2[i]){
            flag=false;
             break;
        }
        i++;
    }

    if(flag){
        cout<<"string is equal"<<endl;
    }
    else{
        cout<<"string is not equal"<<endl;
    }
    return 0;
}