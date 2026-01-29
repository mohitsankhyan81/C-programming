#include <iostream>
using namespace std;

void insertionsort(int arr[],int n){
  int min=INT_MAX;
  int secmin=INT_MAX;

  for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0&&arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }

  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=secmin;
      secmin=arr[i];
    }
    else if(arr[i]<secmin&&arr[i]!=min){
      secmin=arr[i];
    }
  }
  cout<<secmin<<endl;

}
int main(){
  int arr[]={45,34,23,78,67};
  int n=sizeof(arr)/sizeof(int);

  insertionsort(arr,n);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}