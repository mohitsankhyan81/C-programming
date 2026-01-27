#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i;j<n;j++){
      if(arr[j]<arr[minindex]){
        minindex=j;
      }
    }
    if(minindex!=i){
    swap(arr[i],arr[minindex]);
    }
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[]={45,67,34,23,12,34};
  int size=sizeof(arr)/sizeof(int);
  selectionsort(arr,size);
  return 0;
}