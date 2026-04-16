#include <iostream>
using namespace std;
int main(){
    string s="hello";
    int i=0;
    int j=s.size()-1;
    while(i<=j){
        swap(s[i],s[j]);
        j--;
        i++;;
    }
    cout<<s;
    return 0;
}