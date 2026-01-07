//sum in operator overloading
#include <iostream>
using namespace std;

class sumtheobj{
  private:
    int x;
    int y;
  public:
    sumtheobj(){
      x=0;
      y=0;
    }
    sumtheobj(int x,int y){
      this->x=x;
      this->y=y;
    }

    void display(){
      cout<<x<<" "<<y<<endl;
    }

    sumtheobj operator +(sumtheobj c){
      sumtheobj temp;
      temp.x=x+c.x;
      temp.y=y+c.y;
      return temp;
    }
};
int main(){
  sumtheobj o1(34,45);
  sumtheobj o2(34,45);

  sumtheobj o3=o1+o2;
  o3.display();
  return 0;
}