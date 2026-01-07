#include <iostream>
using namespace std;

class Number{
  private:
    int a,b;
  public:
    Number(){
      a=0;
      b=0;
    }

    Number(int a,int b){
      this->a=a;
      this->b=b;
    }

    bool operator >(const Number n){
      return (a+n.a>b+n.b);
    }
};
int main(){
  
  Number n1(45,56);
  Number n2(45,98);

  if(n1>n2){
    cout<<"n1 is greator then n2"<<endl;
  }
  else{
    cout<<"n2 is greator than n1"<<endl;
  }
  return 0;
}