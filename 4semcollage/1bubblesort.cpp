#include <iostream>
using namespace std;

void bubblesort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    bool swapped=false;
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped=true;
      }
    }
    if(swapped==false){
      break;
    }
  }

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  int arr[]={34,34,46,34,23,62};
  int size=sizeof(arr)/sizeof(int);
  bubblesort(arr,size);
  return 0;
}