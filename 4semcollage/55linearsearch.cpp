#include <iostream>
using namespace std;
int main(){
    int arr[]={43,44,76,23,22,56};
    int n=sizeof(arr)/sizeof(int);
    int target=22;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<i;
        }
    }
    
    return 0;
}