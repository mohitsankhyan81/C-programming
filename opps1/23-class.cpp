//polymorfism

#include <iostream>
using namespace std;

class great{
  public:

  void add(int a,int b){
    cout<<"sum of int pera "<<a+b<<endl;
  }

  void add(double a,double b){
    cout<<"sum of double pera "<<a+b;
  }
};

int main(){
  great obj;

  obj.add(3,6);

  obj.add(34.5,4.4);

}