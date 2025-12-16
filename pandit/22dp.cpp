#include <iostream>
using namespace std;
int main(){
  int *p;
  p=new int;
  *p=123;
  cout<<"The adress is "<<p<<" value is "<<*p<<endl;
  delete p;
  return 0;
}