#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="this is the world of the fake characters";

    int n=s.size();
    int i=0;
    int j=s.size()-1;

    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

    int start=0;
    for(int i=0;i<=n;i++){
        if(s[i] ==' ' || i==s.size()){
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
    return 0;
}