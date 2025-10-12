#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}

void printarr(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int arr[]={34,5,76,32,21};
  int size=sizeof(arr)/sizeof(int);

  bubbleSort(arr,size);
  printarr(arr,size);
}