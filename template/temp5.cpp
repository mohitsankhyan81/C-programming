#include <iostream>
using namespace std;

template <class t>

class swapnum{
  t a,b;

  public:
    swapnum(t a1,t b1){
      a=a1;
      b=b1;
    }

    void doswap(){
      t temp=a;
      a=b;
      b=temp;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }
};
int main(){

  swapnum t1(3,5);
  t1.display();
  t1.doswap();
  t1.display();

  cout<<endl;

  swapnum t2(3.4,5.3);
  t2.display();
  t2.doswap();
  t2.display();
  return 0;
}