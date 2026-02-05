#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,1,3,2,5,6,4,1};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}