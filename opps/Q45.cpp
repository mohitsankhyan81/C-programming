#include <iostream>
using namespace std;

class Animal{
  public:
    virtual void sound(){
      cout<<"animal make sound"<<endl;
    }
};

class Dog:public Animal{
  public:
    void sound() override{
      cout<<"Dog bread"<<endl;
    }
};

class Cat:public Animal{
  public:
    void sound() override{
      cout<<"Cat bread"<<endl;
    }
};
int main(){
  Animal *a;

  Dog d;
  Cat c;

  a=&d;
  a->sound();

  a=&c;
  a->sound();

  return 0;
}