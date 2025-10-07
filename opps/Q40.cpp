//Run time polymorfisam


#include <iostream>
using namespace std;

class shape{
  public:
    virtual void area(){
      cout<<"Calculate the area of shape.."<<endl;
    }
};

class Circle:public shape{
  public:
  void area() override {
    cout<<"area of Cirle is Pi * r *r ..."<<endl;
  }
};


class Rectangle:public shape{
  public:
    void area() override{
      cout<<"area of Rectangle: length + breadth"<<endl;
    }
};
int main(){
  shape *s;

  Circle c;
  Rectangle r;

  s=&c;
  s->area();

  s=&r;
  s->area();
  


  return 0;
}