#include <iostream>
using namespace std;
class B;//forword


class A{
  int length;
  public:
    A(int l){
      length=l;
    }
    friend void add(A,B);
};

class B{
  int breadth;
  public:
    B(int b){
      breadth=b;
    }

    friend void add(A,B);
};

void add(A l,B b){
  cout<<l.length<<endl;
  cout<<b.breadth<<endl;
  cout<<l.length+b.breadth<<endl;
}

int main(){
  A obj1(30);
  B obj2(20);

  add(obj1,obj2);
}
