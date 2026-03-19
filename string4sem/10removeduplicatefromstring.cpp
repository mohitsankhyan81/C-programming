#include <iostream>
#include <string>
using namespace std;


int main(){
    string s="data";
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
                s[j]=-1;
            }
        }
    }

    for(int i=0;i<s.size();i++){
        if(s[i]!=-1){
            cout<<s[i];
        }
    }
    return 0;
}