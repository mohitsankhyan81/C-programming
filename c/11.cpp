#include <iostream>
using namespace std;

class number{
  private:
    int a;
    int b;
  public:
    number(int a,int b){
      this->a=a;
      this->b=b;
    }
    
    void display(){
      cout<<a<<" "<<b<<endl;
    }

    number operator+(const number n){
      return number(a+n.a,b+n.b);
    }

};

int main(){
  number a1(45,45);
  number b2(55,67);

  number b3=a1+b2;
  b3.display();
  return 0;
}