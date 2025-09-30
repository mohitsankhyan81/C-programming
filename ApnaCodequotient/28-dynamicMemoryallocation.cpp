//danamic memory
#include <iostream>
using namespace std;
int main(){
  int *p;
  p=new int;
  *p=1234;

  cout<<"The address "<<p<<" the value is "<<*p<<endl;
  delete p;
  return 0;
}