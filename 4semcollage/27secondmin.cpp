#include <iostream>
#include <climits>
using namespace std;

int SecondMax(int arr[],int n){
    int min=INT_MAX;
    int secmin=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            secmin=min;
            min=arr[i];
        }
        else if(arr[i]<secmin&& arr[i]!=min){
            secmin=arr[i];
        }
    }
    return secmin;
}

int main(){
    int arr[]={45,56,34,23,66};
    int n=sizeof(arr)/sizeof(int);

    cout<<SecondMax(arr,n);
    return 0;
}