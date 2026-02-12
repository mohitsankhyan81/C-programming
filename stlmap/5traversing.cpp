#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int>m1={{1,34},{2,35},{4,45}};

    for(auto it=m1.begin();it!=m1.end();++it){
        cout<<it->first<<" "<<it->second<<endl; 
    }
    return 0;
}
