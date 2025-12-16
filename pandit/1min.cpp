#include <iostream>
using namespace std;

void arrmin(int arr[],int n){
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  cout<<min<<endl;
}
int main(){
  int arr[]={3,4,6,2,7};
  int n=5;

  arrmin(arr,n);
  return 0;
}