#include <iostream>
using namespace std;

class A;

class B{
  private:
    int numb;
  public:
    void setB(int y){
      numb=y;
    }
    void b(){
      cout<<"In b is "<<numb<<endl;
    }
    void ab(A a);
};

class A{
  private:
    int numa;
  public:
    void setA(int x){
      numa=x;
    }
    void a(){
      cout<<"In a is "<<numa<<endl;
    }
    friend void B::ab(A a);
};

void B::ab(A a){
  cout << "b assesing value of a " << a.numa<<endl;
}

int main(){
  A a;
  B b;

  a.setA(46);
  b.setB(23);

  a.a();
  b.b();
  b.ab(a);
}