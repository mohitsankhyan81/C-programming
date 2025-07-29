#include <iostream>
using namespace std;

void selectionsort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int smallest=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[smallest]){
        smallest=j;
      }
    }
    swap(arr[i],arr[smallest]);
  }
}

void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main(){
  int arr[]={323,43,4565,23,45,543,2453,34,4523};
  int size=sizeof(arr)/sizeof(int);

  selectionsort(arr,size);
  print(arr,size);
}