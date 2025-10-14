#include <iostream>
using namespace std;

int main(){
  int *a;
  a=new int;
  *a=4523;

  cout<<"The value adreess of a is "<<a<<"the value is "<<*a;
}