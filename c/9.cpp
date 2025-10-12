#include <iostream>
using namespace std;

class Shape{
  protected:
    int base;
    int height;
  public:
    void getdata(){
      cout<<"Enter base and height ";
      cin>>base>>height;
    }
};

class Rectangle:public Shape{
  public:
    void area(){
      double a=base*height;
      cout<<"Area of Rectangle: "<<a <<endl;
    }
};

class Triangle:public Shape{
  public:
    void area(){
      double a =0.5*base*height;
      cout<<"area of Trianggle "<<a<<endl;
    }
};
int main(){

  Rectangle r;
  Triangle t;
  cout<<"for rectangle:\n";
  r.getdata();
  r.area();

  cout<<"For triangle:\n";
  t.getdata();
  t.area();
  return 0;

}