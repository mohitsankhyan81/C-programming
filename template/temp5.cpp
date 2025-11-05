#include <iostream>
using namespace std;
template <class t>
class swap1{
  public:
    t x1,x2;
    
    swap1(t x,t y){
      x1=x;
      x2=y;
    }

    void doswap(){
      t temp=x1;
      x1=x2;
      x2=temp;
    }

    void display(){
      cout<< x1 <<" "<<x2<<endl;
    }
  };
int main(){
  swap1<int> obj1(4,6);
  obj1.display();
  obj1.doswap();
  obj1.display();



  return 0;
}