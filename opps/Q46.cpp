#include <iostream>
using namespace std;

class Bank{
  public:
    virtual float getrate(){
      return 0;
    }
};

class SBI:public Bank{
  public:
    float getrate() override{
      return 5.5;
    }
};

class ICFCI:public Bank{
  public:
    float getrate() override{
      return 6.0;
    }
};

class SDFC:public Bank{
  public:
    float getrate() override{
      return 6.5;
    }
};
int main(){
  Bank *b;

  SBI s;
  b=&s;
  cout<<"SBI is "<<b->getrate()<<endl;
  ICFCI i;
  b=&i;
  cout<<"ICFCI is "<<b->getrate()<<endl;
  SDFC sd;
  b=&sd;
  cout<<"ICFCI is "<<b->getrate()<<endl;
  return 0;
}