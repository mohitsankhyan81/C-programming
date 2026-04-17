#include <iostream>
using namespace std;
int main(){
    string s="my name is mohit";
    int i=0;
    int j=s.size();
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

    int start=0;
    for(int i=0;i<=s.size();i++){
        if(s[i]==' '|| i==s.size()){
            int end=i-1;
            while(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            start=i+1;
        }
    }
    cout<<s;
}