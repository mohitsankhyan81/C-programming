// second min element in the array

#include <iostream>
using namespace std;

int secmin(int arr[],int n){
  int min=INT_MAX;
  int secmin=INT_MAX;

  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=secmin;
      min=arr[i];
    }
    else if(arr[i]<secmin && arr[i]!=min){
      secmin=arr[i];
    }
  }
  return secmin;
}
int main(){
  int arr[]={45,7,34,23,46,34,23,12};
  int n=sizeof(arr)/sizeof(int);
  cout<<secmin(arr,n)<<endl;
  return 0;
}