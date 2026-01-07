//run time polymorfism

#include <iostream>
using namespace std;

class person{
  public:
    virtual void display(){
      cout<<"This is virtual fuction";
    }
};

class member:public person{
  public:
    void display() override{
      cout<<"This is the member fuction"<<endl;
    }
};

class employee:public person{
  public:
    void display() override{
      cout<<"This is the employee fuction"<<endl;
    }
};
int main(){
  person* p;
  member m;
  employee e;
  p=&m;
  p->display();
  p=&e;
  p->display();

  return 0;
}