#include <iostream>
using namespace std;

class Person{
  protected:
    string name;
    int age;
  public:
    Person(){
      name="";
      age=0;
    }
    Person(string n,int a){
      name=n;
      age=a;
    }
};

class student:public Person{
  private:
    int rollNo;
    int marks;
  public:
    student(string n,int a,int r,int m):Person(n,a){
      rollNo=r;
      marks=m;
    }
    student():Person(){
      rollNo=0;
      marks=0;
    }
    void inputdata(){
      cin>>name;
      cin>>age;
      cin>>rollNo;
      cin>>marks;
    }

    void display(){
      cout<<"name is "<<name<<endl;
      cout<<"age is "<<age<<endl;
      cout<<"rollNo is "<<rollNo<<endl;
      cout<<"Marks is "<<marks<<endl;
    }
};

int main(){
  student s1;
  s1.inputdata();
  s1.display();
  return 0;
}