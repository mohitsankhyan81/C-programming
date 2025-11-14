#include <iostream>
using namespace std;

class Vehicle{
  public:
    virtual void acelerate()=0;

    virtual void brake()=0;

    void StartEngine(){
      cout<<"Engine Started!"<<endl;
    }
};

class Car:public Vehicle{
  public:
    void acelerate() override{
      cout<<"Car: pressing gas pedal..."<<endl;
    }
    void brake() override{
      cout<<"Car: Applying brakes..."<<endl;
    }
};

int main(){
  Vehicle* mycar;
  Car n;
  mycar=&n;
  mycar->StartEngine();
  mycar->acelerate();
  mycar->brake();

  return 0;
}