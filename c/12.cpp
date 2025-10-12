#include <iostream>
using namespace std;

class equ{
  int a;
  int b;
  public:
    equ(int a,int b){
      this->a=a;
      this->b=b;
    }

    bool operator==(equ w){
      return (a==w.a,b==w.b);
    }
};

int main(){
  equ a1(53,67);
  equ a2(53,67);

  if(a1==a2){
    cout<<"a1 is equal to a2 "<<endl;
  }
  else{
    cout<<"a1 and a2 is not equal"<<endl;
  }
  return 0;
}