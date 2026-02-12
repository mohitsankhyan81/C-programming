#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,string>m1={{1,"mohit"},{2,"sahil"}};

    m1.insert({3,"ankit"});

    for(auto& p:m1){
        cout<< p.first<<" "<<p.second<<endl;
    }
    return 0;
}
