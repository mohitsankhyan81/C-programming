//vector is std template library

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3};
    cout<<vec[0]<<endl;
    vector<int>vec1(5,0);
    for(int i=0;i<5;i++){
        cout<<vec1[i]<<endl;
    }
}