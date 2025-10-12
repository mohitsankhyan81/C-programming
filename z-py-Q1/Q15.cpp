// print no 1 t0 15 by using for loop

#include <iostream>
using namespace std;
void num(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<endl;
    }
}
int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    num(n);
}