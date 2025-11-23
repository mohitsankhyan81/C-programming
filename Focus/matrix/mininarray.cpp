#include <iostream>
using namespace std;

void minarray(int arr[],int n){
  int min=INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  cout<<min<<endl;
}
int main(){
  int arr[]={45,56,34,23,47};
  int n=5;

  minarray(arr,n);
  return 0;
}