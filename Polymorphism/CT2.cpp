#include <iostream>
using namespace std;
class Base{
  int a;
  public:
  Base(){
    a=20;
  }

  void show(){
    cout<<"\n a= "<<a;
  }
};

class derived:public Base{
  int b;
  public:
  derived(){
    b=25;
  }

  void show(){
    cout<<"\n b = "<<b;
  }
};
int main(){
  derived d;
  d.Base::show();
  d.show();
  return 0;
}