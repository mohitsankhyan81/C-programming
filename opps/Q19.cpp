#include <iostream>
using namespace std;
class intern;
class name{
  private:
    int a;
  public:
    name(int x){
      a=x;
    }

    friend int add(name n,intern i);
};

class intern{
  private:
    int b;
  public:
    intern(int y){
      b=y;
    }

    friend int add(name n,intern i);
};

int add(name n,intern i){
  return n.a+i.b;
}


int main(){
  name obj(35);
  intern obj1(50);

  cout<<"Sum is "<<add(obj,obj1)<<endl;
  return 0;
}