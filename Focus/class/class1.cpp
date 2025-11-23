#include <iostream>
using namespace std;

class Student{
  private:
    string name;
    int roll;
    int marks;
  public:
    Student(string name,int roll,int marks){
      this->name=name;
      this->roll=roll;
      this->marks=marks;
    }

    void display(){
      cout<<"Name is "<<name<<"Roll is "<<roll<<"Marks is "<<marks<<endl;
    }
};
int main(){
  Student s1("Mohit Sankhyan",53654,200);
  s1.display();
  return 0;
}