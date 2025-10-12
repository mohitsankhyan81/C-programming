#include <iostream>
using namespace std;

class add{
  int a;
  int b;

  public:
    add(){
      a=0;
      b=0;
    }
    add(int A,int B){
      a=A;
      b=B;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }
    add operator+(add l){
      add temp;
      temp.a=a+l.a;
      temp.b=b+l.b;
      return temp;
    }
};
int main(){
  add a1(45,56);
  add a2(45,23);

  add a3=a1+a2;
  a3.display();
  return 0;
}