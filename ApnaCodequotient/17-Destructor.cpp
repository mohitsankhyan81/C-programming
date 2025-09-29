#include <iostream>
using namespace std;
class circle{
  private:
    int radius;
  public:
    circle(){//default constructor
      radius=0;
    }
    circle(double r){//peramiter constructor
      radius=r;
    }
    ~circle(){//deconstrctor
      cout<<"This is the default constructor";
    }
    double showareea(){
      return radius*radius*3.1416;
    }
};
int main(){
  circle c1(3);
  cout<<c1.showareea();
}
