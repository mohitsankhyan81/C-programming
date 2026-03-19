//freq of the code

#include <iostream>
#include <string>
using namespace std;

void cheakfreq(string s){
   int freq[26]={0};
   for(int i=0;i<s.size();i++){
    freq[s[i]-'a']++;
   }

   for(int i=0;i<26;i++){
        if(freq[i]>0){
            cout<<"'"<<char(i+'a')<<"' : "<<freq[i]<<endl;
        }
   }
}
int main(){
    string s1="hello world";
    cheakfreq(s1);
    return 0;
}