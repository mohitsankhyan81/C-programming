#include <iostream>
using namespace std;
#define size 3


void arrmin(int arr[size][size],int r1,int c1){
  int max=INT_MIN;
  int second=INT_MIN;
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      if(arr[i][j]>max){
        second=max;
        max=arr[i][j];
      }
      else if(arr[i][j]>second && arr[i][j]!=max){
        second=arr[i][j];
      }
    }
  }
  cout<<second<<endl;
}
int main(){
  int r1,c1;
  cin>>r1>>c1;
  int arr[size][size]={{1,2,3},{4,5,6},{7,8,9}};
  

  arrmin(arr,r1,c1);

  return 0;
}