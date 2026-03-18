#include <iostream>
#include <string>

using namespace std;
int main(){
    string s="abcadeb";
    int n=s.size();
    for(int i=0;s[i]!='\0';i++){
        for(int j=i+1;s[j]!='\0';j++){
            if(s[i]==s[j]){
                s[j]=-1;
            }
        }
    }

    for(int i=0;i<n;i++){
        if(s[i]!=-1){
            cout<<s[i];
        }
    }
    return 0;
}