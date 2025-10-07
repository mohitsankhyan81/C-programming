#include <iostream>
using namespace std;

class lead{
  public:
    void map(){
      cout<<"THis is a constructor"<<endl;
    }
    void map(int a,int b){
      cout<<a<<" "<<b<<endl;
    }
    void map(double a,double b){
      cout<<a<<" "<<b<<endl;
    }
};

int main(){
  lead l1;
  l1.map();
  l1.map(43,34);
  l1.map(54.4,45.4);
  return 0;
}