// print all even no up to n terms using function

#include <iostream>
using namespace std;
int even(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    even(n);
}