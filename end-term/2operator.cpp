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

    bool operator>(number c){
      return (x+c.x,y+c.y);
    }
};
int main(){
  number o1(34,67);
  number o2(34,23);
  if(o1>o2){
    cout<<"o1 is bigger";
  }
  else{
    cout<<"o2 is bigger";
  }
  return 0;
}