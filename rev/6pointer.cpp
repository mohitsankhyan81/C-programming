//void pointer
#include <iostream>
using namespace std;
int main(){
  void *p;
  int a=10;
  p=&a;

  cout<<*(int*)p<<endl;
  return 0;
}