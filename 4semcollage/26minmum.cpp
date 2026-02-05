#include <iostream>
#include <climits>
using namespace std;

int FindMax(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[]={43,45,23,22,6};
    int n=sizeof(arr)/sizeof(int);

    cout<<FindMax(arr,n);
    return 0;
}