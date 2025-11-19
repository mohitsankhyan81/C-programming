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


    Number operator+(const Number &n){
      Number temp;
      temp.a=a+n.a;
      temp.b=b+n.b;
      return temp;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }
};

int main(){

  Number obj(35,34);
  Number obj1(35,34);
  Number obj3=obj+obj1;
  obj3.display();
  return 0;
}