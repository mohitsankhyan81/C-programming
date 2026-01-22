#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={45,35,6,34,34,23};
  int size=sizeof(arr)/sizeof(int);
  bubblesort(arr,size);
}