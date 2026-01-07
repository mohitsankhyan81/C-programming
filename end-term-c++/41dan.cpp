//danamic memory allcate

#include <iostream>
using namespace std;
int main(){
  int *p;
  p=new int;
  *p=1234;
  cout<<"The address is "<<p<<" value is "<<*p<<endl;
  delete p;
  return 0;
}