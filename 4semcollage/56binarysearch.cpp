#include <iostream>
using namespace std;
void binarysearch(int arr[],int n,int target){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1; 
        }
    }
}
int main(){
    int arr[]={11,23,45,67,78,89};
    int n=sizeof(arr)/sizeof(int);
    int target=45;
    binarysearch(arr,n,target);
    return 0;
}