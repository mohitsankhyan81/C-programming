// min element in array

#include <iostream>
using namespace std;

int minterm(int arr[],int n){
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  return min;
}
int main(){
  int arr[]={18,56,34,23,65,34};
  int n=sizeof(arr)/sizeof(int);
  cout<<minterm(arr,n)<<endl;
  return 0;
}