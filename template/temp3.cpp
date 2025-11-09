#include <iostream>
using namespace std;

template <class t>

class maxNumber{
  t a, b;

  public:
   maxNumber(t a1 ,t b1){
       a=a1;
       b=b1;
    } 

    t maxvalue(){
      if(a>b){
        return a;
      }
      else{
        return b;
      }
    }
};


int main(){
  maxNumber m1(34,56);
  cout<<"Max value: "<<m1.maxvalue()<<endl;
  maxNumber m2(3.5,5.4);
  cout<<"max value:"<<m2.maxvalue()<<endl;
  return 0;
}