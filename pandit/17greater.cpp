#include <iostream>
using namespace std;

class Number{
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

    bool operator >(Number n){
      return (a+n.a>b+n.b);
    }
};
int main(){
  Number n1(89,56);
  Number n2(78,67);
  if(n1>n2){
    cout<<"n1 is greater then n2";
  }
  else{
    cout<<"n2 is greatere than n1";
  }
  return 0;
}
