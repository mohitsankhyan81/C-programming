// conver binary to decimal no system

#include <iostream>
using namespace std;

int Binary(int binNum){
    int ans = 0, base = 1;
    while(binNum > 0){
        int rem = binNum % 10;
        ans += (rem * base);
        binNum /= 10;
        base *= 2;
    }
    return ans;
}

int main(){
    int binNum;
    cout << "Enter binary number:" << endl;
    cin >> binNum;
    cout << "Binary to decimal is " << Binary(binNum) << endl;
    return 0;
}
