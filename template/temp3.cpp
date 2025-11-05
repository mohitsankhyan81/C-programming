#include <iostream>
using namespace std;

template <class t>
class maxterm{
  public:
    t a1,b1;
  
    maxterm(t a,t b){
      a1=a;
      b1=b;
    }

    int display(){
      if(a1>b1){
        return a1;
      }
      else{
        return b1;
      }
    }
};
int main(){
  maxterm<int> obj1(35,23);
  cout<<"the maxterm is "<<obj1.display()<<endl;
  maxterm<float> obj2(45.2,12.5);
  cout<<"the maxterm is "<<obj2.display()<<endl;
  return 0;
}