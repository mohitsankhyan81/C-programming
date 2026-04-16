#include <iostream>
using namespace std;
int main(){
    string s="cooc";
    int i=0;
    int j=s.size()-1;
    bool flag=true;
    while(i<j){
        if(s[i]!=s[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout<<"yes string is palindrome"<<endl;
    }
    else{
        cout<<"string is not palindrome"<<endl;
    }
    return 0;
}