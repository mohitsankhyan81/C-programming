#include <iostream>
using namespace std;
class area{
  int length;
  int breadth;
  public:
    area(int length,int breadth){
      this->length=length;
      this->breadth=breadth;
    }

    int display(){
      return length*breadth;
    }
};
int main(){
  area a1(2,34);
  cout<<a1.display();
  return 0;
}