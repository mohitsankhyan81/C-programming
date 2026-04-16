#include <iostream>
using namespace std;
string comparison(string s){
    string result="";
    int count=0;
    for(int i=1;i<=s.size();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            result+=s[i-1];
            result+=to_string(count);
            count=1;
        }
    }
    return result;
}
int main(){
    string s="aaabbccccccccccc";
    cout<<comparison(s);
    return 0;
}