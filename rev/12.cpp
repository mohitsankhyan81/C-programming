#include <iostream>
using namespace std;

class Base{
  protected:
  int a,b;
  public:
    Base(int a,int b){
      this->a=a;
      this->b=b;
    }
    virtual void display()=0;
};

class Drive:public Base{
  public:
    Drive(int a,int b):Base(a,b){

    }

    void display() override{
      cout<<"Sum of a and b is: "<<a+b<<endl;
    }
};

int main(){
  Base* b;
  Drive d(45,56);
  b=&d;
  b->display();
  return 0;
}