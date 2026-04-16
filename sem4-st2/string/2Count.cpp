#include <iostream>
using namespace std;
int main(){
    int vowel=0;
    int coun=0;
    string s="my name is mohit sankhyan";
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel++;
        }
        else if(ch>='a' && ch<='z'){
            coun++;
        }
    }
    cout<<"Vowel is "<<vowel<<endl;
    cout<<"Consonent is "<<coun;
    return 0;
}