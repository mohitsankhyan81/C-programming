#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        if(minidx!=i){
            swap(arr[i],arr[minidx]);
        }
    }
}

int main(){
    int arr[]={45,23,11,56,78};
    int n=sizeof(arr)/sizeof(int);

    selectionsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}