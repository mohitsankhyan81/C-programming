#include <iostream>
using namespace std;
int num(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int result=num(n);
    cout<<result;
}