#include <iostream>
using namespace std;
class B;
class A{
  private:
    int a1;
  public:
    A(int a){
      a1=a;
    }
    friend void add(A,B);
};

class B{
  private:
    int b1;
  public:
    B(int b){
      b1=b;
    }
    friend void add(A,B);
};

void add(A a,B b){
  cout<<a.a1+b.b1<<endl;
}
int main(){
  A a1(45);
  B b1(25);
  add(a1,b1);
  return 0;
}