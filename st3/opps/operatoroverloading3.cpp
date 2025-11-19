#include <iostream>
using namespace std;

class Number{
  private:
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
      temp.b=b+n.b;
      return temp;
    }


};
int main(){
  Number obj1(4,6);
  Number obj2(4,6);
  Number obj3=obj1+obj2;
  obj3.display();
  return 0;
}