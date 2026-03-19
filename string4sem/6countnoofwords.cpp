//count no of words
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1="My name is mohit sankhyan";

    int n=s1.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(s1[i]!=' '&& (i==0 || s1[i-1]==' ')){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}