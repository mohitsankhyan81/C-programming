#include <iostream>
using namespace std;
#define size 50


void transposeofmatrix(int arr[size][size],int r1,int c1){
  int temp[size][size];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      temp[j][i]=arr[i][j];
    }
  }

  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cout<<temp[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int r1,c1;
  cin>>r1>>c1;
  int arr[size][size];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cin>>arr[i][j];
    }
  }

  transposeofmatrix(arr,r1,c1);
  return 0;
}