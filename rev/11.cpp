#include <iostream>
using namespace std;

int maxarr(int arr[],int n){

  int max=INT_MIN;
  int secmax=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      secmax=max;
      max=arr[i];

    }
    else if(arr[i]>secmax&&arr[i]!=max){
      secmax=arr[i];
    }
  }
  return secmax;
}

int main(){
  int n=5;
  int arr[]={45,57,34,7,43};

  cout<< maxarr(arr,n)<<endl;
  return 0;
}