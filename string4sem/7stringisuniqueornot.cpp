#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1="Codidng";
    int n=s1.size();
    bool flag=true;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s1[i]==s1[j]){
                flag=false;
                break;
            }
        }
    }

    if(flag){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}