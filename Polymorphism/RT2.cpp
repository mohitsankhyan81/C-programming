#include <iostream>
using namespace std;

class Base{
  int a;
  public:

  Base(){
    a=20;
  }

  virtual void show(){
    cout<<"\n a = "<<a<<endl;
  }
};

class derived:public Base{
  int b;
  public:
  derived(){
    b=25;
  }

  void show(){
    cout<<"\n b ="<<b;
  }
};



int main(){
  Base s,*ptr;
  derived d;
  ptr=&s;
  ptr->show();
  ptr=&d;
  ptr->show();
  return 0;
}