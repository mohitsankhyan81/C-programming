#include <iostream>
using namespace std;
#define size 3

void matrixmultiplication(int A1[size][size],int B1[size][size],int r1,int c1,int r2,int c2){
  int C[size][size];

  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      C[i][j]=0;
    }
  }

  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      for(int k=0;k<c1;k++){
        C[i][j]+=A1[i][k]*B1[k][j];
      }
    }
  }

  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      cout<<C[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int r1,c1;
  cin>>r1>>c1;
  int r2,c2;
  cin>>r2>>c2;

  int A1[size][size];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cin>>A1[i][j];
    }
  }
  int B1[size][size];
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      cin>>B1[i][j];
    }
  }

  matrixmultiplication(A1,B1,r1,c1,r2,c2);
  return 0;
}