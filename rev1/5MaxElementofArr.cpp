#include <iostream>
#include <cmath>
using namespace std;

int findMax(int arr[],int n){
  int max=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  return max;
}

int main(){
  int arr[]={1,3,5,6,8,4};
  int n=6;
  findMax(arr,n);
  cout<<findMax(arr,n)<<endl;
  return 0;
}