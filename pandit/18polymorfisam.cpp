#include <iostream>
using namespace std;

class Shape{
  public:
    virtual void showdata(){
      cout<<"This is a shape"<<endl;
    }
};

class rectangle:public Shape{
  public:
    void showdata() override{
      cout<<"This is a rectange"<<endl;
    }
};

class circle:public Shape{
  public:
    void showdata() override{
      cout<<"This is a circle"<<endl;
    }
};
int main(){
  Shape* s;
  rectangle r;
  circle c;
  s=&r;
  s->showdata();
  s=&c;
  s->showdata();
  return 0;
}