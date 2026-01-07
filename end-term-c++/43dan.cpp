//danmic programing 

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

    void sum(){
      cout<<x+y<<endl;
    }
};
int main(){
  number *n;
  n=new number(34,45);
  n->sum();
  delete n;
  return 0;
}