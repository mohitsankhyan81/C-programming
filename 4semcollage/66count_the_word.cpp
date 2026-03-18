#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1="my name is mohit sankhyan i am not play cricket";
    int n=s1.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(s1[i]!=' '&& (i==0||s1[i-1]==' ')){
            count++;
        }
    }
    cout<<count;
    return 0;
}