#include <iostream>
using namespace std;


class Number{
  int a,b;
  public:
    Number(int a,int b){
      this->a=a;
      this->b=b;
    }

    void display(){
      cout<<a+b<<endl;
    }
};
int main(){
  Number *n1;
  n1=new Number(34,45);
  n1->display();
  delete n1;
  return 0;
}