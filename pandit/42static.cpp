#include <iostream>
using namespace std;

class Student{
  private:
    static int id;
    string name;
    int age;
  public:
    Student(string name,int age){
      this->name=name;
      this->age=age;
      id++;
    }

    void display(){
      cout<<"Student id "<<id<<"\nName is "<<name<<"\nAge is "<<age<<endl;
    }
};

int Student::id=0;
int main(){
  Student s1("Mohit Sankhyan",35);
  s1.display();
  Student s2("Sahil Sharma",34);
  s2.display();
  return 0;
}