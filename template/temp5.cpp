#include <iostream>
using namespace std;

template <class t>
class name{
  private:
    int x;
    int y;
  public:
    name(t x,t y){
      this->x=x;
      this->y=y;
    }

    void swapdata(){
      int temp=x;
      x=y;
      y=temp;
    }
    void display(){
      cout<<x<<" "<<y<<endl;
    }
};
int main(){
  name<int> n1(34,45);
  n1.display();
  n1.swapdata();
  n1.display();
  return 0;
}