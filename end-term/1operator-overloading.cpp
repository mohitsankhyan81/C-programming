#include <iostream>
using namespace std;

class number{
  int x;
  int y;
  public:

    number(){
      x=0;
      y=0;
    }
    number(int x,int y){
      this->x=x;
      this->y=y;
    }

    void display(){
      cout<<x<<" "<<y;
    }
    number operator +(number c){
      number temp;
      temp.x=c.x+x;
      temp.y=c.y+y;
      return temp;
    }

};
int main(){
  number o1(45,65);
  number o2(34,56);

  number o3=o1+o2;

  o3.display();
  return 0;
}
