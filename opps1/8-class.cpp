#include <iostream>
#include <string>
using namespace std;

void fun(){
  static int x=2;
  cout<<x;
  x++;
}

int main(){
  fun();
  fun();
  fun();
}