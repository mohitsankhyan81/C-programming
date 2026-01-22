#include <iostream>
using namespace std;
int main(){
  int n=9;
  for(int i=n;i>=0;i-=2){
    // if(i==8||i==6||i==4||i==2){
    //   continue;
    // }
    for(int j=0;j<n-i-j;j++){
      cout<<" ";
    }
    for(int j=0;j<i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}