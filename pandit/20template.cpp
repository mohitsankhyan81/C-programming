#include <iostream>
using namespace std;

template <class t>
class Sum{
  int a;
  int b;

  public:
    Sum(t a, t b){
      this->a=a;
      this->b=b;
    }

    void display(){
      cout<<"Sum is "<<a+b<<endl;
    }
};
int main(){
  Sum<int> a1(45,56);
  a1.display();
  
  Sum<float> b1(45.4,56.4);
  b1.display();

  return 0;
}