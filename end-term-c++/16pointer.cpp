//basic pointer

#include <iostream>
using namespace std;
int main(){
  int a=10;
  int *p=&a;
  int **q=&p;
  int ***c=&q;

  cout<<*p<<endl;
  cout<<**q<<endl;
  cout<<***c<<endl;
  cout<<a<<endl;
  cout<<p<<endl;
  cout<<q<<endl;
  cout<<c<<endl;
  cout<<&a<<endl;
  cout<<&p<<endl;
  cout<<&q<<endl;
  return 0;
}
