#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]!=1){
            cout<<arr[i]+1;
            break;
        }
    }
    return 0;
}