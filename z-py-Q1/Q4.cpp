// Sum of all Odd numbers from 1 to N

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
}
