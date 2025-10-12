#include <iostream>
using namespace std;

class Box{
  private:
    int length;
    int breadth;
  public:
    Box(int l,int b){
      length=l;
      breadth=b;
    }

    ~Box(){
      cout<<"This is object deconstructor"<<endl;
    }

    void display(){
      cout<<"length is "<<length<<" Breadth is "<<breadth<<" sum is "<<length+breadth<<endl;
    }
    bool operator<(const Box &b){
      return (length*breadth)<(b.length*b.breadth);
    }
  
};
int main(){
  Box b1(342,32);
  Box b2(47,78);

  if(b1<b2){
    cout<<"b2 is big"<<endl;
  }
  else{
    cout<<"b1 is less"<<endl;
  }
  b1.display();
  b2.display();
  return 0;
}