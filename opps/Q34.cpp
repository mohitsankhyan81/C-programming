#include <iostream>
using namespace std;

class shape{
  public:
    void display(){
      cout<<"Drow a shape"<<endl;
    }
};

class Box{
  private:
    int length;
    int breadth;
  public:
    Box(int l,int b){
      length=l;
      breadth=b;
    }

    void display2(){
      cout<<length<<" , "<< breadth<<endl;
    }

};

class Circle:public shape,Box{
  private:
    int radius;
  public:
    Circle(int l,int b,int r):Box(l,b){
      radius=r;
    };

    void display3(){
      display();
      display2();
      cout<<radius<<endl;
    }
  
};
int main(){
  Circle c1(45,45,45);
  c1.display3();
  return 0;
}