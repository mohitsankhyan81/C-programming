// To calculate the sum of numbers from 1 to N in C++
//using function
#include <iostream>
using namespace std;
int sum1(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    cout<<"sum is  "<<sum1(5)<<endl;
}