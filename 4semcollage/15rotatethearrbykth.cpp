#include <iostream>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5,6,7};
  int n=sizeof(arr)/sizeof(int);
  int k=3;
  for(int i=0;i<n;i+=k){
    int st=i;
    int end=i+k-1;
    if(end>=n){
      end=n-1;
    }
    while(st<=end){
      int temp=arr[st];
      arr[st]=arr[end];
      arr[end]=temp;
      st++;
      end--;
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}