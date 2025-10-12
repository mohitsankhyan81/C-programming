#include <iostream>
using namespace std;

class Box{
  private:
    double length;
    double breadth;
    double height;

    public:
      void setDimensions(double ln,double br,double he){
        length=ln;
        breadth=br;
        height=he;
      }

      double volume(void){
        return length*breadth*height;
      }
      Box operator+(Box b){
        Box box;
        box.length=length+b.length;
        box.breadth=breadth+b.breadth;
        box.height=height+b.height;
        return box;
      }
};
int main(){
  Box box1;
  Box box2;
  Box box3;

  double volume=0.0;
  box1.setDimensions(3.4,4.4,3.2);
  box2.setDimensions(5.6,5.6,4.4);
  volume=box1.volume();
  cout<<"volume of Box1 "<<volume<<endl;
  volume=box2.volume();
  cout<<"volume of Box2 "<<volume<<endl;
  box3=box1+box2;
  volume=box3.volume();
  cout<<"volume of box3 "<<volume<<endl;
  return 0;
}