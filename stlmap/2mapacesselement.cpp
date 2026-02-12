#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int>m1={{1,34},{2,45},{3,34}};
        cout<<m1[1]<<endl;
        cout<<m1.at(2)<<endl;
    return 0;
}