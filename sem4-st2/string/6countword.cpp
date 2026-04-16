#include <iostream>
using namespace std;
int main(){
    string s="My name is mohit sankhyan";
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '&& (i==0 || s[i-1]==' ')){
            count++;
        }
    }
    cout<<count;
    return 0;
}