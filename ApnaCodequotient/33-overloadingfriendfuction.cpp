#include <iostream>
using namespace std;

class Box{
  private:
    double length;
    double breadth;
    double height;
  public:
    double volume(void){
      return length*breadth*height;
  }
  void setdimentions(double ln,double be,double hg){
    length=ln;
    breadth=be;
    height=hg;
  }
  friend Box operator +(Box,Box);
};
Box operator+(Box b1,Box b2){
  Box box;
  box.length=b1.length+b2.length;
  box.breadth=b1.breadth+b2.breadth;
  box.height=b1.height+b2.height;
  return box;
}
int main(){
  Box box1;
  Box box2;
  Box box3;

  double volume=0.0;
  box1.setdimentions(3.4,3.4,4.4);
  box2.setdimentions(4.6,5.6,4.5);
  volume=box1.volume();
  cout<<"volume of box1 :"<<volume<<endl;
  volume=box2.volume();
  cout<<"volume of box2 "<<volume<<endl;
  box3=operator+(box1,box2);
  volume= box3.volume();
  cout<<"volume of box3 "<<volume<<endl;
  return 0;
}