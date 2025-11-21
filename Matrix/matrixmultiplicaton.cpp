#include <iostream>
using namespace std;
#define size 50

void multipliesAandB(int a[size][size],int b[size][size],int r1,int c1,int r2,int c2){
  int c[size][size];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      c[i][j]=0;
    }
  }

  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      for(int k=0;k<c1;k++){
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }

  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int r1,c1;
  cin>>r1>>c1;
  int r2,c2;
  cin>>r2>>c2;

  int a[size][size],b[size][size];

  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      cin>>a[i][j];
    }
  }

  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
      cin>>b[i][j];
    }
  }

  multipliesAandB(a,b,r1,c1,r2,c2);
return 0;
}