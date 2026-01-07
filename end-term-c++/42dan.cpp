//class for the dynamic programing

#include <iostream>
using namespace std;

class number{
  private:
    int x;
    int y;
  public:
    number(int x,int y){
      this->x=x;
      this->y=y;
    }

    void area(){
      cout<<x*y<<endl;
    }
};
int main(){
  number *n;
  n=new number(12,12);
  n->area();
  delete n;
  return 0;
}