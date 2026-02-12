#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string> m1;
    map<int,string> m2={{1,"mohit"},{2,"ankit"},{3,"sahil"}};

    for(auto & p:m2){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}