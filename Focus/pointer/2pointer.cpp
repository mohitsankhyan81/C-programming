#include <iostream>
using namespace std;
int main(){
  int a=10;
  int *p=&a;
  int **q=&p;
  **q=*p+**q;
  cout<<a<<endl;
  return 0;
}