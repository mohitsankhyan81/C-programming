#include <iostream>
#include <cmath>
using namespace std;

class Circle{
  private:
    double radius;
    public:
  void getdata(){
    radius=1.5;
  }
  double showdata(){
    return radius*radius*3.14;
  }
};
int main(){
  Circle c;
  c.getdata();
  cout<<c.showdata();
  return 0;
}