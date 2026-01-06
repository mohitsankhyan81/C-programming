// second max of the array

#include <iostream>
using namespace std;

int secondmax(int arr[],int n){
  int max=INT_MIN;
  int secmax=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=secmax;
      secmax=arr[i];
    }
    else if(arr[i] > secmax && arr[i]!=max){
      secmax=arr[i];
    }
  }
  return secmax;
}
int main(){
  int arr[]={35,57,34,44,23,12};
  int n=sizeof(arr)/sizeof(n);
  cout<<secondmax(arr,n)<<endl;
  return 0;
}