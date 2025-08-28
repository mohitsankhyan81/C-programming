#include <iostream>
#include <string>
using namespace std;

class A{
  public:
  int x;

  void inX(){
    x=x+1;
  }
};


int main(){
  A a;
  a.x=1;
  cout<<a.x<<endl;
  a.inX();
  cout<<a.x<<endl;
}