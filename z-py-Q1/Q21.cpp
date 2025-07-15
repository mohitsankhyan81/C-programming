// WAF to reverse an Integer n.

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n=523;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev;
}