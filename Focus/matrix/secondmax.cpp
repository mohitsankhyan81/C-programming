#include <iostream>
using namespace std;

void secondmaxinarray(int arr[],int n){
  int max=INT_MIN;
  int second=INT_MIN;

  for(int i=0;i<n;i++){
    if(arr[i]>max){
      second=max;
      max=arr[i];
    }
    else if(arr[i]>second&&arr[i]!=max){
      second=arr[i];
    }
  }
  cout<<second<<endl;
}

int main(){
  int arr[]={45,56,34,78,23,68};
  int n=6;
  
  secondmaxinarray(arr,n);
  return 0;
}