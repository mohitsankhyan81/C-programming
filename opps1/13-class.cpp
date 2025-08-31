//copy constructor

//special constructor use to copy properties of one object into another object

#include <iostream>
#include <string>
using namespace std;

class teacher{
  private:
    int id;
    string name;

  public:
    teacher(int a,string b){
      id=a;
      name=b;
    }
    
    void getdata(){
      cout<<"id is: "<<id<<endl;
      cout<<"name is: "<<name<<endl;
    }
};

int main(){
  teacher t1(1,"mohit");
  t1.getdata();

  teacher t2(t1);
  t2.getdata();
}