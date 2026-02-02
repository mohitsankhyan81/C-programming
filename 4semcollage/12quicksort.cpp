#include <iostream>
using namespace std;

int partition(int arr[],int st,int end){
  int idx=st-1;
  int pivot=arr[end];
  for(int i=st;i<end;i++){
    if(arr[i]<=pivot){
      idx++;
      swap(arr[i],arr[idx]);
    }
  }
  idx++;
  swap(arr[idx],arr[end]);
  return idx;
}
void quicksort(int arr[],int st,int end){
  if(st<end){
    int pivot=partition(arr,st,end);
    quicksort(arr,st,pivot-1);
    quicksort(arr,pivot+1,end);
  }
}
int main(){
  int arr[]={45,67,34,23};
  int n=sizeof(arr)/sizeof(int);

  quicksort(arr,0,n-1);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}