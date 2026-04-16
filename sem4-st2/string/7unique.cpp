#include <iostream>
using namespace std;
int main(){
    string s="mohitt";
    bool flag=true;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
                flag=false;
                break;
            }
        }
    }
    if(flag){
        cout<<"Unique";
    }
    else{
        cout<<"not uniqe";
    }
    return 0;
}