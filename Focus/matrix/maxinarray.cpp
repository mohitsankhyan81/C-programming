// max element in array

#include <iostream>
using namespace std;

void findmax(int arr[],int n){
  int max=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<max<<endl;
}


int main(){
  int arr[]={45,56,34,67,33};
  int n=5;

  findmax(arr,n);
  return 0;
}