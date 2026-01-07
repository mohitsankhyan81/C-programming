#include <iostream>
using namespace std;

class person{
  protected:
    string name;
    int age;
  public:
    void setPerson(string name,int age){
      this->name=name;
      this->age=age;
    }
    void display(){
      cout<<"name is "<<name<<endl;
      cout<<"age is "<<age<<endl;
    }
};

class student:protected person{
  protected:
    int rollNo;
    float marks;
  public:
    void setStudent(string name,int age,int rollNo,float marks){
      setPerson(name,age);
      this->rollNo=rollNo;
      this->marks=marks;
    }

    void displaystudent(){
      display();
      cout<<"Roll no is "<<rollNo<<endl;
      cout<<"marks is "<<marks<<endl;
    }
};
int main(){
  student s1;
  s1.setStudent("Mohit sankhyan",35,56,67.3);
  s1.displaystudent();
  return 0;
}