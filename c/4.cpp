#include <iostream>
using namespace std;


class student{
  private:
  static int totalcount;
  string name;
  int id;
  public:

    student(string name,int id){
      this->name=name;
      this->id=id;
      totalcount++;
    }

    void display(){
      cout<<"order no "<<totalcount<<"\nOrder by "<<name<<"\norder id "<<id<<endl;
    }
};

int student::totalcount=0;
int main(){
  student s1("Mohit Sankhyan",564353254);
  s1.display();
  student s2("Robin singh",435234565);
  s2.display();
  return 0;
}