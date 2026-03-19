#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="this is the car";
    int n=s.length();
    int vow=0;
    int con=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'|| s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
            vow++;
        }
        else if(s[i]!=' '){
            con++;
        }
    }

    cout<<"Vowel: "<<vow<<endl;
    cout<<"Consonent: "<<con<<endl;
    return 0;
}