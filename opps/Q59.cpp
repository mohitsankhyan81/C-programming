#include <iostream>
using namespace std;

class shape{
  public:
  virtual void area(){
    cout<<"Shape is in name ";
  }
};

class circle:public shape{
  public:
    void area() override {
      cout<<"Mohit"<<endl;
    }
}; 

class rectangle:public shape{
  public:
  void area() override{
    cout<<"This is the rectangle"<<endl;
  }
};


int main(){
  shape *s;

  circle c;
  rectangle r;

  s=&c;
  s->area();
  s=&r;
  s->area();
  return 0;
}