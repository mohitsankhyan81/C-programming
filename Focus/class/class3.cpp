#include <iostream>
using namespace std;

class Rectangle{
  int length;
  int width;
  public:
    Rectangle(int length,int width){
      this->length=length;
      this->width=width;
    }

    void area(){
      cout<<"Area is "<<length*width<<endl;
    }

    void perimeter(){
      cout<<"Perimiter is "<<2*(length*width)<<endl;
    }
};
int main(){
  Rectangle r1(45,56);
  r1.area();
  r1.perimeter();
  return 0;
}