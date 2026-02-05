#include <iostream>
using namespace std;
int main(){
    int arr[]={34,56,76,56,1};
    int n=sizeof(arr)/sizeof(int);
    int target=1;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<arr[i]<<" index is "<<i;
        }
    }
    return 0;
}