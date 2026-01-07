// plus using temp

#include <iostream>
using namespace std;

template <class t>
class number{
  private:
    t a;
    t b;
  public:
    number(t a,t b){
      this->a=a;
      this->b=b;
    }

    void display(){
      cout<<a+b<<endl;
    }
};
int main(){
  number<int>n1(45,45);
  n1.display();

  number<float>n2(45.3,45.2);
  n2.display();
  return 0;
}