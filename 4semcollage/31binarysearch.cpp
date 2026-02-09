#include <iostream>
using namespace std;

int binarysearch(int arr[],int st,int end,int target){
    while(st<=end){
        int mid=st+(end-st)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}

int main(){
    int arr[]={45,67,87,90,99};
    int n=sizeof(arr)/sizeof(int);
    int target=99;

    int data=binarysearch(arr,0,n-1,target);
    cout<<data;
    return 0;
}