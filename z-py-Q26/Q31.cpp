// second highest no of array

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    int max=INT8_MIN,secondmax=INT8_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];
        }
    else if(arr[i]>secondmax && arr[i]!=max){
        secondmax=arr[i];
    }
    }
    cout<<"second max is "<<secondmax;
}