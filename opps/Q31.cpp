#include <iostream>
using namespace std;


class Student{
  private:
    string name;
    int age;
  
  public:
    Student(string n,int a){
      name=n;
      age=a;
    }

    void display(){
      cout<<"name is "<<name<<endl;
      cout<<"age is "<<age<<endl;
    }
};
int main(){
  Student s1("Mohit",45);
  Student s2(s1);
  s1.display();
  s2.display();
  return 0;
}