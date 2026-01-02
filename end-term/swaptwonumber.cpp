#include <iostream>
#include <algorithm>
using namespace std;
template <class t>
class swaptwo{
  int x;
  int y;
  public:

    swaptwo(t x, t y){
      this->x=x;
      this->y=y;
    }

    void display(){
      cout<<x<<" "<<y<<endl;
    }

    void swapnum(){
      swap(x,y);
    }
};

int main(){
  swaptwo<int> s1(23,46);
  s1.display();
  s1.swapnum();
  s1.display();

  swaptwo<float>o1(3.2,24.2);
  o1.display();
  o1.swapnum();
  o1.display();
  return 0;
}