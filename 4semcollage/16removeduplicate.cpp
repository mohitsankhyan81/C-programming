#include <iostream>
using namespace std;
int main(){
  int arr[]={1,1,3,5,6,6,8,8};
  int n=sizeof(arr)/sizeof(int);

  int i=0;
  int j=1;
  while(j<n){
    if(arr[i]!=arr[j]){
      i++;
      arr[i]=arr[j];
    }
    j++;
  }

  for(int k=0;k<=i;k++){
    cout<<arr[k]<<endl;
  }

  return 0;
}