// decimal to binary no systeem

#include <iostream>
using namespace std;
int binary_convert(int decNumber){
    int ans=0,pow=1;
    while(decNumber > 0){
        int rem=decNumber%2;
        decNumber /= 2;

        ans += (rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    for(int i=1;i<=10;i++){
        cout<<binary_convert(i)<<endl;
    }
}