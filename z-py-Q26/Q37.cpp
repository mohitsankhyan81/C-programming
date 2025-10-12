//bubble short

#include <iostream>
using namespace std;

void thisbubbleshort(int arr[],int size){
  
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={45,76,32,65,87};
  int size=sizeof(arr)/sizeof(int);

  for(int i=0;i<size-1;i++){
    for(int j=0;j<size-1-i;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }

  thisbubbleshort(arr,size);
  return 0;
}