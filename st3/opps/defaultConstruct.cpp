#include <iostream>
using namespace std;

class Circle{
  private:
    float radius;
  public:
    Circle(){
      radius=5;
    }

    int area(){
      return radius;
    }

    ~Circle(){
      cout<<"Circle ended";
    }
};
int main(){
  Circle obj1;
  cout<<obj1.area()<<endl;
  return 0;
}