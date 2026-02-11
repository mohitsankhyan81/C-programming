#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        if(minindex!=i){
        swap(arr[i],arr[minindex]);
        }
    }
}

int main(){
    int arr[]={15,3,4,23,56,2};
    int n=sizeof(arr)/sizeof(int);

    selectionsort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}