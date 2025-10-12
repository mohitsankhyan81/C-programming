#include <iostream>
using namespace std;

class Animal{
  public:
    virtual void sound(){
      cout<<"This is a dog"<<endl;
    }
};

class dog:public Animal{
  public:
    void sound() override{
      cout<<"dog , bread"<<endl;
    }
};
int main(){
  Animal *a;
  dog d;
  a=&d;
  a->sound();
  return 0;
}