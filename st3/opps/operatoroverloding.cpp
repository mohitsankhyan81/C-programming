#include <iostream>
using namespace std;

class Number{
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

    bool operator = (const Number n){
      return (a+n.a==a+n.b);
    }
};
int main(){
  Number obj1(46,34);
  Number obj2(46,35);

  if(obj1=obj2){
    cout<<"obj1 is equals to obj2";
  }
  else{
    cout<<"obj1 is not equals to obj2";
  }

  return 0;
}