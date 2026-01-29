#include <iostream>
#include <algorithm>

using namespace std;

void bubblesort(int arr[],int n){
  int camp=0;
  int swap=0;
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      camp++;
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        swap++;
      }
    }
  }
  // cout<<swap<<endl;
  // cout<<camp<<endl;
}

int kthElement(int arr[],int n,int k){
  bubblesort(arr,n);
  return arr[n-k-2];
}

int main(){
  int arr[]={5,4,3,2,1};
  int n=sizeof(arr)/sizeof(int);
  int k=2;
  bubblesort(arr,n);
  
  cout<<"sorted array"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<kthElement(arr,n,k)<<endl;
}