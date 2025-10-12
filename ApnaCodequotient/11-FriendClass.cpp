#include <iostream>
using namespace std;

class y;
class x{
  private:
  int x1;
  public:
    void getdata_x(){
      x1=45;
    }
    void display(y);
};

class y{
  private:
    int Y;
  public:
    void getdata_y(){
      Y=34;
    }
    friend void x:: display(y);
};

void x::display(y y2){
  cout<<"x is "<<x1<<endl;
  cout<<"y is "<<y2.Y<<endl;
}
int main(){
  x x1;
  y y1;
  x1.getdata_x();
  y1.getdata_y();
  x1.display(y1);
  return 0;
}