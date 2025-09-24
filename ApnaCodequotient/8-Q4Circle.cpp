#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

#include <cmath>

class Circle
{
  private:
    double radius;
    
  public:
    Circle(double r){
        radius=r;
    }
    
    double area(){
        return round(3.14159*radius*radius*100)/100;
    }
    
    double circumference(){
        return round(3.14159*2*radius*100)/100;
    }
    
    double getRadius(){
        return round(radius*10)/10;
    }
    
    string toString(){
        return "Circle{radius="+to_string(radius).substr(0,to_string(radius).find(".")+2)+"}";
    }
};

int main()
{
  float d1;
  cin>>d1;
  Circle o1(d1);
  cout<<setprecision(4)<<o1.area()<<endl;
  cout<<o1.circumference()<<endl;
  cout<<o1.getRadius()<<endl;
  cout<<o1.toString();
  return 0;
}