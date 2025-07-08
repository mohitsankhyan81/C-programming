// This is a C++ program to calculate the binomial coefficient, commonly known as "n choose r" or written mathematically as:
#include <iostream>
using namespace std;

int calc(int n){
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int ncr(int n, int r){
    int fac1 = calc(n);
    int denor = calc(r) * calc(n - r);
    return fac1 / denor;
}

int main(){
    int n = 8, r = 2;
    int res = ncr(n, r);
    cout << "ans is " << res << endl;
    return 0;
}
