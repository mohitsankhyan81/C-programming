//fount the longest word of the stirng

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="this is the valid palindrome";

    string word="";
    string longest="";
    for(int i=0;i<=s.size();i++){
        if(s[i]==' '|| i==s.size()){
            if(word.size()>longest.size()){
                longest=word;
            }
            word="";
        }
        else{
            word+=s[i];
        }
    }
    cout<<longest<<endl;
    return 0;
}