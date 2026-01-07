//normal class only setdata and getdata

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

    string getname(){
      return name;
    }
    int getage(){
      return age;
    }
};
int main(){
  student s1;
  s1.setdata("Mohit Sankhyan",34);
  cout<<s1.getname()<<endl;
  cout<<s1.getage()<<endl;
  return 0;
}