#include <iostream>
using namespace std;
int main(){
  int x=5;
  int *p=&x;
  int **q=&p;

  cout<<x<<endl;
  cout<<*p<<endl;
  cout<<**q<<endl;
  return 0;
}