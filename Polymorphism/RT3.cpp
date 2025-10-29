#include <iostream>
using namespace std;
//pure virtual function

class Base{
  protected:
  int a;
  public:
    Base(){
      a=20;
    }

    virtual void show()=0;
};

class drived:public Base{
  int b;
  public:
    drived(){
      b=25;
    }

    void show(){
      cout<<"\n a = "<<a<<"\n b = "<<b<<endl;
    }
};
int main(){
  Base* ptr;
  drived d;
  ptr=&d;
  ptr->show();

  return 0;
}