#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s1="caac";
    int i=0;
    int j=s1.size()-1;
    while(i<j){
        swap(s1[i],s1[j]);
        i++;
        j--;
    }
    cout<<s1;
    return 0;
}
