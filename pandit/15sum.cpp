#include <iostream>
using namespace std;

class Number{
  int a,b;
  public:
    Number(){
      a=0;
      b=0;
    }

    Number(int a,int b){
      this->a=a;
      this->b=b;
    }
    void display(){
      cout<<a<<" "<<b<<endl;
    }
    Number operator+(const Number n){
      Number temp;
      temp.a=a+n.a;
      temp.b=a+n.b;
      return temp;
    }
};
int main(){
  Number n1(45,54);
  Number n2(45,76);
  Number n3=n1+n2;

  n3.display();

  return 0;
}