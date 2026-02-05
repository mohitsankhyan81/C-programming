#include <iostream>

using namespace std;
int main(){
    int arr[]={1,2,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    int diff=arr[1]-arr[0];
    for(int i=1;i<n-1;i++){
        diff=min(diff,arr[i+1]-arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]!=1){
            cout<<arr[i]+diff;
        }
    }
    return 0;
}