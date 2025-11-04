#include <iostream>
using namespace std;
template <class t>
class sum{
  public:
  t num1,num2;
  sum(t a,t b){
    num1=a;
    num2=b;
  }

  t add(){
    return num1+num2;
  }
};
int main(){

  sum <int> s1(3,6);
  cout<<"Sum of integer is"<<s1.add()<<endl;

  return 0;
}