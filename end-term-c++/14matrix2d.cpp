//dignal element sum

#include <iostream>
using namespace std;
#define size 50

void dignalelementsum(int arr[size][size],int r,int c){
  int sum=0;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(i==j ||i+j== r-1){
        sum+=arr[i][j];
      }
    }
  }

  cout<<sum<<endl;
}

int main(){
  int r,c;
  cin>>r>>c;
  int arr[size][size];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr[i][j];
    }
  }

  dignalelementsum(arr,r,c);
  return 0;
}