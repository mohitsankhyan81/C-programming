//equal or not operator overloading

#include <iostream>
using namespace std;

class number{
  private:
    int x;
    int y;
  public:
    number(){
      x=0;
      y=0;
    }
    number(int x,int y){
      this->x=x;
      this->y=y;
    }
    
    bool operator=(number n){
      return (x==n.x&&y==n.y);
    }
};
int main(){
  number n1(45,57);
  number n2(45,53);

  if(n1=n2){
    cout<<"n1 is equal to n2"<<endl;
  }
  else{
    cout<<"n2 or n1 is not equal"<<endl;
  }
  return 0;
}