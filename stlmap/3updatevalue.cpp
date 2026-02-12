#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string>m1={{1,"mohit"},{2,"sahil"},{3,"data"}};
    m1[0]="wonder";
    m1.at(2)="header";

    cout<<m1[0]<<endl;
    cout<<m1.at(2)<<endl;
    return 0;
}