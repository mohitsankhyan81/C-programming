#include <iostream>
using namespace std;

class shape{
  public:
    virtual void area(){
      cout<<"This is the Shape class";
    }
};

class Rectangle:public shape{
  public:
    void area() override{
    cout<<"this is the Rectangle class";
  }
};

class Circle:public shape{
  public:
    void area() override{
      cout<<"This is the Circle class";
    }
};

int main(){
  shape *s1;
  
  Rectangle r;
  Circle c;

  s1=&r;
  s1->area();

  s1=&c;
  s1->area();
  return 0;
}