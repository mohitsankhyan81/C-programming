#include <iostream>
using namespace std;

void insertionsort(int arr[],int n){
  for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]%2==0&&key%2!=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={1,4,3,2,5,6,7};
  int size=sizeof(arr)/sizeof(int);
  insertionsort(arr,size);
  return 0;
}