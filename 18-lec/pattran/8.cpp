#include <iostream> 
using namespace std;
int main(){
  int m=5;
  int n=5;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(i==1||j==1||i==n||j==m){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}