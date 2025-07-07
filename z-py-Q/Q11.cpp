//output of this code

#include <iostream>
using namespace std;
int fun(int x){
    x=2*x;
    cout<<"x = "<<x<<endl;
}
int main(){
    int x=5;
    fun(x);
    cout<<"x = "<<x<<endl;
}