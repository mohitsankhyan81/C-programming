#include <iostream>
using namespace std;

void merge(int arr[],int st,int mid,int end){
  int i=st;
  int j=mid+1;  
  int temp[end-st+1];
  int k=0;

  while(i<=mid&&j<=end){
    if(arr[i]<arr[j]){
      temp[k++]=arr[i++];
    }
    else{
      temp[k++]=arr[j++];
    }
  }

  while(i<=mid){
    temp[k++]=arr[i++];
  }

  while(j<=end){
    temp[k++]=arr[j++];
  }

  for(int i=0;i<k;i++){
    arr[st+i]=temp[i];
  }
}

void mergesort(int arr[],int st,int end){
  if(st<end){
    int mid=st+(end-st)/2;
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);

    merge(arr,st,mid,end);
  }
}
int main(){
  int arr[]={34,45,34,68,56};
  int size=sizeof(arr)/sizeof(int);

  mergesort(arr,0,size-1);

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}