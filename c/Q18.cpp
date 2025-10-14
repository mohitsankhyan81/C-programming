#include <iostream>
using namespace std;
class ope{
  private:
    int lenght;
    int breadth;
  public:
    ope(int l,int b){
      lenght=l;
      breadth=b;
    }

    bool operator==(ope o){
      return (lenght==o.lenght&&breadth==o.breadth);
    }
};
int main(){
  ope o1(54,56);
  ope o2(54,56);

  if(o1==o2){
    cout<<"o1 is equal to o2"<<endl;
  }
  else{
    cout<<"o1 and o2 is not equal"<<endl;
  }
  return 0;
}