#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
  for(int i=0;i<=n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}
int main(){
  int arr[]={34,45,34,56,34,46};
  int size=sizeof(arr)/sizeof(int);
  bubblesort(arr,size);
  return 0;
}