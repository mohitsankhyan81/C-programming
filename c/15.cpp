#include <iostream>
using namespace std;



int main(){
  int *a;
  a=new int;
  *a=4535;
  cout<<"The address of " <<a<<" the value is "<<*a<<endl;
  return 0;
}