#include <iostream>
using namespace std;

void getfreq(string s){
    int freq[26]={0};

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(freq[i]>0){
            cout<<"'"<<char(freq[i]-'a')<<"' : "<<freq[i]<<endl;
        }
    }
}
int main(){
    string s="helloworld";
    getfreq(s);
    return 0;
}