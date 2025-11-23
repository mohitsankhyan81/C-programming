#include <iostream>
using namespace std;

void secondmininarray(int arr[],int n){
  int min=INT_MAX;
  int second=INT_MAX;

  for(int i=0;i<n;i++){
    if(arr[i]<min){
      second=min;
      min=arr[i];
    }
    else if(arr[i]<second&&arr[i]!=min){
      second=arr[i];
    }
  }
  cout<<second<<endl;
}

int main(){
  int arr[]={45,57,34,23,56,76};
  int n=6;

  secondmininarray(arr,n);
  return 0;
}