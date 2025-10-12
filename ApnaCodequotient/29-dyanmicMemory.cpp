//danmic memory

#include <iostream>
using namespace std;

class circle{
  private:
    double radius;
    double area;
  public:
    circle(){
      cout<<"\n Constructor";
      area=0;
      radius=5.6;
    }
    ~circle(){
      cout<<"\n Destructor";
    }
    void showradidus(){
      area=radius*radius*3.1416;
      cout<<"\n area"<<area;
    }
};
int main(){
  circle *c;
  c=new circle;
  c->showradidus();
  delete c;
  return 0;
}