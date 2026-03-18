#include <iostream>
using namespace std;
char maximum(string s){
     if(s.empty()) return '\0';
        int n=s.size();

    for(int i = 0; i < n; i++){
        s[i] = tolower(s[i]);
    }
  int count=1;
    int maxfreq=1;
    char result=tolower(s[0]);
    for(int i=1;i<n;i++){
        if(tolower(s[i])==tolower(s[i-1])){
            count++;
        }
        else{
            count=1;
        }
        if(count>maxfreq){
            maxfreq=count;
            result=tolower(s[i]);
        }
    }

    return result;
}
int main(){
    cout<<maximum("CharacterFrequencya1b2c3d4e1");
return 0;
}