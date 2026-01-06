//basic pointer

#include <iostream>
using namespace std;
int main(){
  int a=10;
  int *p=&a;
  cout<<*p<<endl; //10
  cout<<a<<endl; //10
  cout<<&a<<endl; //adress
  cout<<p<<endl;  //address
  return 0;
}