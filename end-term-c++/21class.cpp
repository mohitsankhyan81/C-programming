// single class friend fuction

#include <iostream>
using namespace std;

class student{
  private:
    string name;
    int age;
  public:
    void setdata(string n,int a){
      name=n;
      age=a;
    }

    friend void displayStudent(student);
};

void displayStudent(student s1){
  cout<<s1.name<<endl;
  cout<<s1.age<<endl;
}

int main(){
  student s1;
  s1.setdata("Mohit sankhyan",45);

  displayStudent(s1);
  return 0;
}