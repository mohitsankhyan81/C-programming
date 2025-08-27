#include <iostream>
using namespace std;
class Number{
  public:
    int n;
  
    Number(int set_A){
      n=set_A;
    }

    Number operator+(const Number &numA){
      return Number(this->n+numA.n);
    }

};
int main(){
  Number a(20);
  Number b(25);
  Number c=a+b;


  cout<<"the sum of a+b : "<<c.n<<endl;
  return 0;
}