#include <iostream>
using namespace std;
int facto(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res=res*i;
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter value of n  "<<endl;
    cin>>n;
    int fact=facto(n);
    cout<<"ans is "<<fact<<endl;
}