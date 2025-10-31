#include <iostream>
using namespace std;

class Shape{
  public:
    virtual void drow(){
      cout<<"Drow a shape"<<endl;
    }
};

class circle:public Shape{
  public:
    void drow() override {
      cout<<"to drow circle"<<endl;
    }
};

class rectangle:public Shape{
  public:
  void drow() override{
    cout<<"This is rectangle"<<endl;
  }
};
int main(){
  Shape* ptr;
  rectangle r;
  circle c;
  ptr=&r;
  ptr->drow();
  ptr=&c;
  ptr->drow();

  return 0;
}