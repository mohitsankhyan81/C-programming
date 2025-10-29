#include <iostream>
using namespace std;
class Base{
  public:
  virtual void display(){
    cout<<"Base class function"<<endl;
  }
};

class Drived:public Base{
  public:
    void display() override{
      cout<<"Drived class function"<<endl;
    }
};
int main(){
Base* basePtr;
Drived derivedObj;

basePtr = &derivedObj;

basePtr->display();

}