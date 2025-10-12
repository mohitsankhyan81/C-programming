#include <iostream>
using namespace std;
int main(){
  int *p;
  p=new int;
  *p=4523;

  cout<<"The address of "<<p<<" the value is "<<*p<<endl;
  return 0;
}