//we use pointer at the float datatype also 


#include <iostream>
using namespace std;
int main(){
  int a=10;
  int *ptr=&a;
  cout<<*ptr<<endl;//show the value at pointer *ptr 
  cout<<ptr<<endl;//show the addres of pt
  cout<<&a<<endl;//show the addres of &a
  cout<<&ptr<<endl;//show the addres of &ptr
}
