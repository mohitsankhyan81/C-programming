#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="a2b3c5";
    string digit;
    for(int i=1;i<s.size();i+=2){
        digit.push_back(s[i]);
    }
    string data;
    for(int i=0;i<s.size();i+=2){
        data.push_back(s[i]);
    }

    string res="";
    for(int i=0;i<digit.size();i++){
        int count=digit[i]-'0';
        for(int j=0;j<count;j++){
            res+=data[i];
        }
    }
    cout<<data<<endl;
    cout<<digit<<endl;
    cout<<res;
    return 0;
}