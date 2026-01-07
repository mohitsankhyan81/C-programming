// static count to get the index of the elements let see

#include <iostream>
using namespace std;

class student{
  private:
    string name;
    int age;
    static int count;
  public:
    void setdata(string n,int a){
      name=n;
      age=a;
      count++;
    }

    void display(){
      cout<<"Student Name: "<<name<<"\nStudent Age: "<<age<<"\nCount "<<count<<endl;
    }
};
int student::count=0;
int main(){
  student s1;
  s1.setdata("MOhit sankhyan",45);
  s1.display();
  student s2;
  s2.setdata("Ankit sankhyan",34);
  s2.display();
  return 0;
}