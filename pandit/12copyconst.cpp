#include <iostream>
using namespace std;

class Sum{
  int a;
  int b;
  public:
    Sum(int a,int b){
      this->a=a;
      this->b=b;
    }

    Sum(Sum &s){
      a=s.a;
      b=s.b;
    }

    void display(){
      cout<<"Sum is "<<a+b<<endl;
    }
};
int main(){
  Sum obj1(34,56);
  Sum obj2(obj1);
  obj1.display();
  obj2.display();
  return 0;
}