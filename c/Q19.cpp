#include <iostream>
using namespace std;
class ope{
  private:
    int length;
    int breadth;

  public:
    ope(int l,int b){
      length=l;
      breadth=b;
    }

    bool operator>(ope o){
      return (length*breadth>o.length*o.breadth);
    }
};
int main(){
  ope b1(45,56);
  ope b2(45,67);

  if(b1>b2){
    cout<<"b1 is greater";
  }
  else{
    cout<<"b2 is greater";
  }
  return 0;
}