//string is palindrome or not palindrome
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1="abba";
    int i=0;
    int j=s1.size()-1;
    bool flag=true;
    while(i<j){
        if(s1[i]!=s1[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }

    if(flag){
        cout<<"string is palindrome"<<endl;
    }
    else{
        cout<<"String is not palindrome"<<endl;
    }
    return 1;

}