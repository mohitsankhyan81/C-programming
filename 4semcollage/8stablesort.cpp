#include <iostream>
using namespace std;

void bubblesort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]<0&&arr[j+1]>0){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}
int main(){
  int arr[]={100,-20,200,-50,300};
  int n=sizeof(arr)/sizeof(int);

  bubblesort(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}