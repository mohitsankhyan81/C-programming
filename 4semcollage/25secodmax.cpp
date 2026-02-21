#include <iostream>
#include <climits>
using namespace std;

int SecondMax(int arr[],int n){
    int max=INT_MIN;
    int secmax=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }
        else if(arr[i]>secmax&& arr[i]!=max){
             secmax=arr[i];
        }
    }
    return secmax;
}

int main(){
    int arr[]={45,56,34,23,66};
    int n=sizeof(arr)/sizeof(int);

    cout<<SecondMax(arr,n);
    return 0;
}