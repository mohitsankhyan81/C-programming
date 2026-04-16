#include <iostream>
using namespace std;
int main(){
    string s="this is the counter attack";
    int n=s.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    int start=0;
    for(int i=0;i<=s.size();i++){
        if(i==n || s[i]==' '){
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