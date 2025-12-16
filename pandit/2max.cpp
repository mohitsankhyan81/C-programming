#include <iostream>
using namespace std;

void arrmax(int arr[],int n){
  int max=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  cout<<max<<endl;
};

int main(){
  int arr[]={4,6,3,7,8};
  int n=5;

  arrmax(arr,n);
  return 0;
}