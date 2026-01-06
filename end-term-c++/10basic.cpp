// max in the array

#include <iostream>
using namespace std;

int maxis(int arr[],int n){
  int max=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  return max;
}
int main(){
  int arr[]={34,56,34,68,34,78};
  int n=sizeof(arr)/sizeof(int);
  cout<<maxis(arr,n)<<endl;
  return 0;
}