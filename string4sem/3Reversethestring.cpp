#include  <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s="HelloWorld";
    int i=0;
    int j=s.size();

    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

    cout<<s;
    return 0;
}