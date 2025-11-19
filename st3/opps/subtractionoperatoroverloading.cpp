#include <iostream>
using namespace std;

class Number{
  private:
    int a;
    int b;
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
    Number operator-(const Number n){
      Number temp;
      temp.a=a-n.a;
      temp.b=b-n.b;
      return temp;
    }
};
int main(){
  Number n1(35,56);
  Number n2(46,78);
  Number n3=n1-n2;
  n3.display();
  return 0;
}