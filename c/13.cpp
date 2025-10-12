#include <iostream>
using namespace std;

class number{
  int a;
  int b;
  public:
    number(int a,int b){
      this->a=a;
      this->b=b;
    }

    bool operator >(number n){
      return (a+n.a>b+n.b);
    }
};
int main(){
  number n1(67,67);
  number n2(56,45);

  if(n1>n2){
    cout<<"n1 is greater than equal to n2 ";
  }
  else{
    cout<<"n2 is greater";
  }
  return 0;
}