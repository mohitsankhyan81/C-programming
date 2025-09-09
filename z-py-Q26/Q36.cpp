#include <iostream>
using namespace std;

void spiralmatix(int arr[100][100], int r,int c){
  int top=0;
  int bottam=r-1;
  int left=0;
  int right=c-1;

  while(top<=bottam && left<=right){
    
    for(int i=left;i<=right;i++){
      cout<<arr[top][i];
    }
    top++;
    for(int i=top;i<=bottam;i++){
      cout<<arr[i][right];
    }
    right--;
    
    if(top<=bottam){
      for(int i=right;i>=left;i--){
        cout<<arr[bottam][i];
      }
          bottam--;
    }

    if(left<=right){
      for(int i=bottam;i>=top;i--){
        cout<<arr[i][left];
      }
      left++;
    }

  }
}
int main(){
  int r;
  int c;
  cout<<"enter the value of r";
  cin>>r;
  cout<<"enter the value of c";
  cin>>c;

  int arr[100][100];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>arr[i][j];
    }
  }
  spiralmatix(arr,r,c);
}