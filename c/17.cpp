#include <iostream>
using namespace std;

class student{
  private:
    int length;
    int breadth;
  public:
    student(){
      length=56;
      breadth=34;
    }

    void area(){
      cout<<"area "<<length*breadth<<endl;
    }

};

int main(){
  student *s1;
  s1=new student;
  s1->area();
  delete s1;
  return 0;
}