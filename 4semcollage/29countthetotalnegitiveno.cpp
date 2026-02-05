#include <iostream>
using namespace std;
int main(){
    int arr[]={34,-13,78,-21,-56};
    int n=sizeof(arr)/sizeof(int);
    int count=0;
    int i=0;
    while(i<n){
        if(arr[i]<0){
            count++;
        }
        i++;
    }
    cout<<count;
    return 0;
}