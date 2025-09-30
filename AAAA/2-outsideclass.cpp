#include <iostream>
using namespace std;
class person{
  private:
    double radius;
  public:
    void getdata();
    double showdata();
};

void person::getdata(){
  radius=1.5;
}
double person::showdata(){
  return radius*radius*3.1416;
}
int main(){
  person c;
  c.getdata();
  cout<<"area is "<<c.showdata();
  return 0;
}