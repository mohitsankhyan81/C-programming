#include <iostream> 
using namespace std;

class B;
class A{
  private:
   int x;
  public:
    A(int x){
      this->x=x;
    }

    friend void add(A,B);
};

class B{
  private:
    int y;
  public:
    B(int y){
      this->y=y;
    }
    friend void add(A,B);
};

void add(A a,B b){
  cout<<"Sum of x and y is "<<a.x+b.y<<endl;
}
int main(){
  A obj1(10);
  B obj2(20);
  add(obj1,obj2);
  return 0;
}