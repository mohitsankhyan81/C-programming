#include <iostream>
using namespace std;


void secondmin(int arr[],int n){
  int min=INT_MAX;
  int secondmin=INT_MIN;

  for(int i=0;i<n;i++){
    if(arr[i]<min){
      secondmin=min;
      min=arr[i];
    }
    else if(arr[i]<secondmin && arr[i]!=min){
      secondmin=arr[i];
    }
  }
  cout<<secondmin<<endl;
}
int main(){
  int arr[]={34,46,67,32,12};
  int n=5;

  secondmin(arr,n);
  return 0;
}