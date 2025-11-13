#include <iostream>
using namespace std;

int fact(int n){
  int rev=1;
  for(int i=1;i<=n;i++){
    rev=rev*i;
  }
  return rev;
}
int main(){
  int n=5;
  fact(n);
  cout<<fact(n)<<endl;
}