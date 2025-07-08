#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of num: ";
    cin>>n;
    int r;
    
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<"factorial of n: ";
    cout<<factorial<<endl;
    
    cout<<"enter the value of r: ";
    cin>>r;
    
    int rfactorial=1;
    for(int k=1;k<=r;k++){
       rfactorial*=k;
    }
    cout<<"factorial of r: ";
    cout<<rfactorial<<endl;
    
    
    int x=n-r;
    int fact1=1;
    for(int j=1;j<=x;j++){
        fact1*=j;
    }
    cout<<"difference of n and r: ";
    cout<<fact1<<endl;
    
    
    int final_factorial=factorial/(rfactorial*fact1);
    cout<<"final_factorial: ";
    cout<<final_factorial;

    return 0;
}