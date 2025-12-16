#include <iostream>
using namespace std;

class Rectangle{
  int length;
  int height;

  public:
    Rectangle(int length,int height){
      this->length=length;
      this->height=height;
    }

    void area(){
      cout<<length*height<<endl;
    }

    void perimeter(){
      cout<<2*(length*height)<<endl;
    }
};
int main(){
  Rectangle r1(45,56);
  r1.area();
  r1.perimeter();
  return 0;
}