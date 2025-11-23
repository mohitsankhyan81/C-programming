#include <iostream>
using namespace std;

void sumofDignal(int arr[3][3]){
  int sum=0;
    for(int i=0;i<3;i++){
      sum+=arr[i][i];
      sum+=arr[i][3-i-1];
    }

  cout<<sum<<endl;
}

int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  sumofDignal(arr);
  return 0;
}