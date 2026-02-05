#include <iostream>
using namespace std;
int main(){
  int arr[]={23,34,45,56,67};
  int n=sizeof(arr)/sizeof(int);

  int i=0;
  int j=n-1;
  while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}