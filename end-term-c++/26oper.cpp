//operator overloading uniry overloading

#include <iostream>
using namespace  std;

class number{
  private:
    int a;
    int b;
    int c;
  public:
    number(int a,int b,int c){
      this->a=a;
      this->b=b;
      this->c=c;
    }

    void display(){
      cout<<a<<" "<<b<<" "<<c<<endl;
    }

    void operator -(){
      a=-a;
      b=-b;
      c=-c;
    }
};
int main(){
  number n1(34,56,-23);
  n1.display();
  -n1;
  n1.display();
  return 0;
}