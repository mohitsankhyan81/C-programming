#include <iostream>
using namespace std;

class sum{
  int a1;
  int b1;

  public:
    sum(){
      a1=0;
      b1=0;
    }
    sum(int a,int b){
      a1=a;
      b1=b;
    }
    sum operator+(sum &s){
      return sum(a1+s.a1,b1+s.b1);
    }
    
    void display(){
      cout<<"Sum "<<a1+b1<<endl;
    }
};

int main(){
  sum c1(70,45);
  sum d1(50,45);

  sum result=c1+d1;
  result.display();
  c1.display();

  return 0;
}