//run time polymorfisam

#include <iostream>
using namespace std;

class emp{
  public:
    virtual void show(){
      cout<<"This is the emp class"<<endl;
    }
};

class empwork:public emp{
  public:
    void show() override{
      cout<<"Here all workers work defined"<<endl;
    }
};

class empworktime:public emp{
  public:
    void show() override{
      cout<<"Here all the workers join time and dutty end time defined"<<endl;
    }
};
int main(){
  emp* e;
  empwork ee;
  empworktime et;

  e=&ee;
  e->show();

  e=&et;
  e->show();
  return 0;
}