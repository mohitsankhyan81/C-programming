#include <iostream>
#include <climits>
using namespace std;

int FindMax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={43,45,23,22,6};
    int n=sizeof(arr)/sizeof(int);

    cout<<FindMax(arr,n);
    return 0;
}