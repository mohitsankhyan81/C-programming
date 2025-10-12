#include <iostream>
#include <string>
using namespace std;

class Employee{
  int id;
  static int count;

  public:
    void setdata(void){
      cout<<"Enter the id"<<endl;
      cin>>id;
      count++;
    }

    void getdata(void){
      cout<<"the id of the employ is "<<id<<" and this employee number "<<count<<endl;
    }
};

int Employee::count=1000;


int main(){
  Employee harry,rohan,lovish;

  harry.setdata();
  harry.getdata();

  rohan.setdata();
  rohan.getdata();

  lovish.setdata();
  lovish.getdata();

  return 0;
}