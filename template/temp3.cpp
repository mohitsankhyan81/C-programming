#include <iostream>
using namespace std;

template <class t>
class Swapno{
  int a;
  int b;
  public:
    Swapno(t a,t b){
      this->a=a;
      this->b=b;
    }

    void swap(){
      int temp=a;
      a=b;
      b=temp;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }
};
int main(){
  Swapno s(4,6);
  s.display();
  s.swap();
  s.display();
  return 0;
}