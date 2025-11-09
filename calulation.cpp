#include <iostream>
using namespace std;

class calculation{
  public:
    virtual void calculate(){
      cout<<"Data Calculation"<<endl;
    }
};

class Addition:public calculation{
  protected:
  int a,b,c;
  public:
  Addition(){
    a=0;
    b=0;
    c=0;
  }
  Addition(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
  }

  void calculate() override{
    cout<<a+b+c<<endl;
  }

};

class Multipliaction:public calculation{
    protected:
  int a,b,c;
  public:
  Multipliaction(){
    a=0;
    b=0;
    c=0;
  }
  Multipliaction(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
  }
  void calculate() override{
    cout<<a*b*c<<endl;
  }
};

int main(){
  calculation* c;

  Addition a(3,4,6);
  Multipliaction m(4,6,8);

  c=&a;
  c->calculate();
  c=&m;


  c->calculate();

  return 0;
}