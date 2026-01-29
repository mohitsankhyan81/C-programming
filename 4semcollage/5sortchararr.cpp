#include <iostream>
using namespace std;

void selectionsort(char arr[],int n){
  for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minindex]){
        minindex=j;
      }
    }
    swap(arr[i],arr[minindex]);
  }
}
int main(){
  char arr[]={'a','f','d','o','m'};
  int n=sizeof(arr)/sizeof(arr[0]);

  selectionsort(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
  return 0;
}