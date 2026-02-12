#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,int>m1={{1,35},{2,45},{3,56}};

    auto is=m1.find(2);

    if(is!=m1.end()){
        cout<<is->first<<" "<<is->second<<endl;
    }

    
    return 0;
}