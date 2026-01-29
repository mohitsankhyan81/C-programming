#include <iostream>
using namespace std;

void bubblesort(int arr[],int m,int n){
  for(int i=0;i<m-1;i++){
    for(int j=0;j<m;j++){
      for(int k=0;k<=n-i-1;k++){
        if(arr[k]>arr[k+1]){
          int temp=arr[k];
          arr[k]=arr[k+1];
          arr[k+1]=temp;
        }
      }
    }
  }
}
int main(){
  int arr[]={34,56,23,23,78};
  int m=sizeof(arr)/sizeof(int);
  int n=2;
  bubblesort(arr,m,n);
  for(int i=0;i<m;i++){
    cout<<arr[i]<<endl;
  }
  return 0;
}