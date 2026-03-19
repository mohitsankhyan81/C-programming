//find string length

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1="mohit";
    int count=0;
    for(int i=0;s1[i]!='\0';i++){
        count++;
    }
    cout<<count;;
    return 0;
}