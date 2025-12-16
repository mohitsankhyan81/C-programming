#include <iostream>
using namespace std;
#define size 3

void dignalelement(int arr[size][size],int r,int c){
  int sum=0;
  for(int i=0;i<r;i++){
    sum+=arr[i][i];
    sum+=arr[i][3-i-1];
  }
  cout<<sum<<endl;
}
int main(){
  int r,c;
  cin>>r>>c;
  int arr[size][size]={{1,2,3},{4,5,6},{7,8,9}};
  
  dignalelement(arr,r,c);
  return 0;
}