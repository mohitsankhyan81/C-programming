#include <iostream>
using namespace std;

class Base{
  int a;
  public:
    Base(){
      a=20;
    }
    void show(){
      cout<<"a = "<<a<<endl;
    }
};

class Drived:public Base{
  int b;
  public:
    Drived(){
      b=25;
    }

    void show(){
      cout<<"b = "<<b<<endl;
    }
};
int main(){
  Drived d;
  d.Base::show();
  d.show();
  return 0;
}