#include <iostream>
using namespace std;

class over{
  int length;
  int breadth;

  public:
    over(int l,int b){
      length=l;
      breadth=b;
    }

    bool operator>(over o){
      return (length+breadth)>(o.length+o.breadth);
    }

    void display(){
      cout<<length<<" "<<breadth<<endl;
    }

};

int main(){
  over op1(45,34);
  over op2(45,93);

  op1.display();
  op2.display();
  if(op1>op2){
    cout<<"op1 is greater"<<endl;
  }
  else{
    cout<<"op2 is greater"<<endl;
  }
  return 0;
}