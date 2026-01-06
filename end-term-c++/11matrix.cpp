//sum of array elements

#include <iostream>
using namespace std;

void sumofarr(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  cout<<sum<<endl;
}
int main(){
  int arr[]={4,6,3,4,6};
  int n=sizeof(arr)/sizeof(int);
  sumofarr(arr,n);
  return 0;
}