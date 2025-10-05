#include <iostream>
using namespace std;

class Rectangle{
  private:
    int length;
    int breadth;

  public:
    Rectangle(int l,int b){
      length=l;
      breadth=b;
    }

    int area(){
      return length*breadth;
    }

    int perimeter(){
      return 2*(length+breadth);
    }
};
int main(){
  Rectangle a1(10,20);

  cout<<a1.area()<<endl;
  cout<<a1.perimeter()<<endl;
  return 0;
}