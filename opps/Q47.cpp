#include <iostream>
using namespace std;

class Add{
  public:
    int sum(int a,int b){
      return a+b;
    }
    int sum(int a,int b,int  c){
      return a+b+c;
    }
};

int main(){
  Add obj;
  cout<<"sum of two "<<obj.sum(10,30)<<endl;
  cout<<"Sum of three "<<obj.sum(10,30,10)<<endl;
  return 0;
}