#include <iostream>
using namespace std;

class student{
  int rollNo;
  string name;

  public:
    void setdata(int r,string n){
      rollNo=r;
      name=n;
    }
    friend void printdata(student p);
};
void printdata(student p){
  cout<<p.rollNo<<" "<<p.name<<" ";
}

int main(){
  student s1,s2;
  s1.setdata(45,"mohit");
  s2.setdata(35,"Ankit");

  printdata(s1);
  printdata(s2);
}