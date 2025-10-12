#include <iostream>
using namespace std;

class Shape{
  public:
    virtual void area(){
      cout<<"Shape area is vide"<<endl;
    } 
};

class Rectangle:public Shape{
  public:
    void area() override{
      cout<<"Rectange is in the vide"<<endl;
    }
};

class Cirle:public Shape{
  public:
    void area() override{
      cout<<"Circle is in the shape";
    }
};
int main(){
  Shape *s;

  Rectangle r;
  Cirle c;

  s=&r;
  s->area();
  s=&c;
  s->area();
  return 0;
}