// Print Factorial of a number N.

#include <iostream>
using namespace std;
int main(){
    int n=5;
    int result=1;
    for(int i=1;i<=n;i++){
        result=result*i;
    }
    cout<<result;
}
