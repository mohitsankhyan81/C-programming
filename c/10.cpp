#include <iostream>
using namespace std;

class Number{
  int a,b;
  public:
  Number(int a,int b){
    this->a=a;
    this->b=b;
  }

  void show(){
    cout<<a<<" "<<b<<endl;
  }

  void operator-(){
    a=-a;
    b=-b;
  }
};
int main(){
  Number n1(45,-46);
  n1.show();
  -n1;
  n1.show();
  return 0;
}