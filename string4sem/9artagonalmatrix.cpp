#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s1="mohit";
    string s2="hito";

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int n=s1.size();
    bool flag=true;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            flag=false;
        }
    }
    if(flag){
        cout<<"arthgonal"<<endl;
    }
    else{
        cout<<"not arthgonal"<<endl;
    }
    return 0;
}