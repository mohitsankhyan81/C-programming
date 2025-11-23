#include <iostream>
using namespace std;
int main(){
  int x=5;
  int *p=&x;
  int *q=p++;
  cout<<*q<<" "<<*p<<endl;
  return 0;
}