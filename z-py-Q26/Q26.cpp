// WAF to calculate sum & product of all numbers in an array.

#include <iostream>
using namespace std;
int cal(int arr[],int size){
    int sum=0,avg;
    for(int i=0;i<arr[i];i++){
        sum=sum+arr[i];
    }
    avg=sum/2;
    cout<<"sum is "<<sum<<endl;
    cout<<"avg is "<<avg<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    
    cal(arr,size);
}