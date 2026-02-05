#include <iostream>
using namespace std;

int binarysearch(int arr[],int st,int end,int target){
    while(st<=end){
    int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={45,67,68,89,99};
    int n=sizeof(arr)/sizeof(int);
    int target=99;

    int index=binarysearch(arr,0,n-1,target);
    cout<<index;
    return 0;
}