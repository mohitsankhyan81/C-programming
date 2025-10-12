#include <iostream>
using namespace std;

class student{
  private:
    string name;
    int age;
  public:
    student(string n,int a){
      name=n;
      age=a;
    }
    void display(void);
};

void student::display(){
  cout<<"name is "<<name<<" age is "<<age<<endl;
}

int main(){
  student s1("Mohit",45);
  s1.display();
  return 0;
}