#include <iostream>
using namespace std;

class Shape{
  protected:
    int radius;
    int area;
  public:
    Shape(int radius,int area){
      this->radius=radius;
      this->area=area;
    }
    virtual void display() = 0;
};

class Circle:public Shape{
  public:
    Circle(int radius,int area):Shape(radius,area){

    }
    void display() override{
      cout<<"Radius is "<<radius<<"\nArea is:- "<<area<<endl;
    }
};
int main(){
  Shape* b;
  Circle d(45,35);
  b=&d;
  b->display();
  return 0;
}