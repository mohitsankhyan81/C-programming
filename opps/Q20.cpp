#include <iostream>
using namespace std;
class y;
class x{
  private:
    int x1;
  public:
    x(int X){
      x1=X;
    }

    void display(y);
};

class y{
  private:
    int y1;
  public:
    y(int Y){
      y1=Y;
    }

    friend void x::display(y);
};

void x::display(y Y){
  cout<<"x is "<<x1<<endl;
  cout<<"y is "<<Y.y1<<endl;
}
int main(){
  x x1(20);
  y y1(40);

  x1.display(y1);
  return 0;
}