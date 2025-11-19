#include <iostream>
using namespace std;

class UnaryOperator{
  private:
    int a,b;
  public:
    UnaryOperator(int a,int b){
      this->a=a;
      this->b=b;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }

    void operator-(){
      a=-a;
      b=-b;
    }

};

int main(){
  UnaryOperator u(35,-10);
  u.display();
  -u;
  u.display();
  return 0;
}