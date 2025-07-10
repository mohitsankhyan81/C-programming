//pop in cpp

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size of vector is "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(50);
    vec.push_back(75);
    vec.pop_back();
    cout<<"sizze after push back "<<vec.size()<<endl;
    for(int i:vec){
        cout<<i<<endl;
    }
}