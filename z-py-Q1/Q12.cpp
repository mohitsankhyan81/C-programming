// calculate the sum of digits of a number in C++

#include <iostream>
using namespace std;
int digit(int n){
    int rem;
    int sum=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter value of n "<<endl;
    cin>>n;
    int val=digit(n);
    cout<<"value is "<<val<<endl;
}