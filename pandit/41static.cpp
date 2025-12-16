#include <iostream>
using namespace std;

class Number{
  private:
    static int num;
  public:
    void increment(){
      num++;
    }
    void display(){
      cout<<num<<endl;
    }
};

int Number::num=0;
int main(){
  Number n1,n2,n3;
  n1.increment();
  n1.display();
  n2.increment();
  n2.display();
  n3.increment();
  n3.display();
  return 0;
}