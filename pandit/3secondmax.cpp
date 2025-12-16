#include <iostream>
using namespace std;

void secondmax(int arr[],int n){
  int max=INT_MIN;
  int secondmax=INT_MIN;

  for(int i=0;i<n;i++){
    if(arr[i]>max){
      secondmax=max;
      max=arr[i];
    }
    else if(arr[i]>secondmax && arr[i]!=max){
      secondmax=arr[i];
    }
  }
  cout<<secondmax<<endl;
}

int main(){
  int arr[]={45,23,12,34,56};
  int n=5;
  secondmax(arr,n);
  return 0;
}