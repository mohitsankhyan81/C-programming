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


class Derived:public Base{
  int b;

  public:
    Derived(){
      b=25;
    }

    void show(){
      cout<<"b = "<<b<<endl;
    }
};
int main(){
  Base S,*ptr;
  Derived D;
  ptr=&S;
  ptr->show();
  ptr=&D;
  ptr->show();
  return 0;
}