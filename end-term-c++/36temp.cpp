//swap two no using tempate

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
      cout<<a<<" "<<b<<endl;
    }

    void swap(){
      t temp;
      temp=a;
      a=b;
      b=temp;
    }
};
int main(){
  number<int>n1(45,35);
  n1.display();
  n1.swap();
  n1.display();

  number<float>n2(45.3,32.2);
  n2.display();
  n2.swap();
  n2.display();
  return 0;
}