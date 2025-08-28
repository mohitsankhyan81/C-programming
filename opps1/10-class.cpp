#include <iostream>
#include <string>
using namespace std;


class Employee{
  int id;
  int count;

  public:
    void setdata(void){
      cout<<"Enter your id :-"<<endl;
      cin>>id;
    }
    void getdata(void){
      cout<<"The id of the employ is "<<id;
    }
};


int main(){
  Employee name;
  name.setdata();
  name.getdata();
  return 0;
}