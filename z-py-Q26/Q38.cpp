#include <iostream>
using namespace std;
int main(){
  int n=10;
  int array[]={43,34,64,43,23,12,12,87,49,76};

  int temp,start=0,end=n-1;

  while(start<=end){
    temp=array[start];
    array[start]=array[end];
    array[end]=temp;
    start++;
    end--;
  }

  for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
  }
  return 0;
}