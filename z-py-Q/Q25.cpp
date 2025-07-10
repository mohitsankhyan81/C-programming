//reverse an array

#include <iostream>
using namespace std;
int Rev_arr(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={12,3,45,34,23,1,2,7};
    int size=sizeof(arr)/sizeof(int);
    Rev_arr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}