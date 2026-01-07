//make the firnd fuction and call by the function

#include <iostream>
using namespace std;

class y;
class x{
  private:
    int a;
  public:
    void seta(int a){
      this->a=a;
    }
    friend void add(x,y);
};

class y{
  private:
    int b;
  public:
    void setb(int b){
      this->b=b;
    }
    friend void add(x,y);
};

void add(x obj1,y obj2){
  cout<<obj1.a+obj2.b<<endl;
}
int main(){
  x obj1;
  obj1.seta(34);
  y obj2;
  obj2.setb(45);

  add(obj1,obj2);
  return 0;
}