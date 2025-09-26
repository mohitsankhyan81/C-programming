#include <iostream>
using namespace std;

class Rectangle{
  public:
    int length;
    int breadth;

    Rectangle(int a,int b){
      length=a;
      breadth=b;
    }

    ~Rectangle(){
      cout<<"display after destroying object";
    }

    void display(){
      cout<<length<<endl;
      cout<<breadth<<endl;
    }
};

class area:public Rectangle{
  public:
  area(int a,int b):Rectangle(a,b){};
  void rectangleCalculate(){
    cout<<length*breadth<<endl;
  }
  void dasplay(){
    cout<<length<<" "<<breadth<<endl;
  }
};
int main(){
  area a1(2,3);
  a1.display();
  a1.rectangleCalculate();
  return 0;
}