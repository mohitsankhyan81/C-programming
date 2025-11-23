#include <iostream>
using namespace std;

void secondmax(int arr[3][3]){
  int max=INT_MIN;
  int second=INT_MIN;

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(arr[i][j]>max){
        second=max;
        max=arr[i][j];
      }
      else if(arr[i][j]>second && max!=arr[i][j]){
        second=arr[i][j];
      }
    }
  }
  cout<<second<<endl;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    secondmax(arr);
  return 0;
}