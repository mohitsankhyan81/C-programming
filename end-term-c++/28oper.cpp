//less than greater than in the operator overloading

#include <iostream>
using namespace std;
class number{
  private:
    int a;
    int b;
  public:
    number(){
      a=0;
      b=0;
    }
    number(int a,int b){
      this->a=a;
      this->b=b;
    }

    bool operator>(number n){
      return (a+b)>(n.a+n.b);
    }
};
int main(){
  number n1(45,56);
  number n2(45,100);

  if(n1>n2){
    cout<<"n1 is greater"<<endl;
  }
  else{
    cout<<"n2 is greater"<<endl;
  }
  return 0;
}