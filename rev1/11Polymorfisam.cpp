#include <iostream>
using namespace std;
class Parent{
  public:
    void func(){
      cout<<"Parent.func()"<<endl;
    }

    virtual void func(int a){
      cout<<"parent.func(int): "<<a<<endl;
    }
};

class Child:public Parent{
  public:
  void func(int a) override{
    cout<<"child fun "<<a<<endl;
  }
};

int main(){
  Parent* p;
  Child c;
  
  p=&c;
  p->func();
  p->func(10);

  c.func(20);

  p->func(30);
  return 0;
}