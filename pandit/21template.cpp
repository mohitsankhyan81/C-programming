#include <iostream>
using namespace std;
template <class t>
class Swaps{
  int a,b;
  public:
    Swaps(t a,t b){
      this->a=a;
      this->b=b;
    }

    void display(){
      cout<<a<<" "<<b<<endl;
    }

    int swap(){
      int temp;
      temp=a;
      a=b;
      b=temp;
      return temp;
    }

};
int main(){
  Swaps a1(45,67);
  a1.display();
  a1.swap();
  a1.display();
  
  return 0;
}