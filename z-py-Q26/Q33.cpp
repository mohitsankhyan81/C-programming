//rotate the array
//input like 1 2 3 4 5
//output lile 2 3 4 5 1

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int first=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}