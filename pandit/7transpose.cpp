#include <iostream>
using namespace std;
#define size 3

void arrtraspose(int arr[size][size],int r,int c){
  int temp[size][size];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      temp[j][i]=arr[i][j];
    }
  }

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cout<<temp[i][j]<<" ";
    }
    cout<<endl;
  }
};
int main(){
  int r,c;
  cin>>r>>c;
  int arr[size][size]={{1,2,3},{4,5,6},{7,8,9}};

  arrtraspose(arr,r,c);
  return 0;
}