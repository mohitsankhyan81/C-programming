#include <iostream>
using namespace std;

class studnet{
  private:
    string name;
    int age;
  public:
    studnet(string n,int a){
      name=n;
      age=a;
    }

    void display(){
      cout<<"name is "<<name<<endl;
      cout<<"age is "<<age<<endl;
    }
};
int main(){
  studnet *s1;
  s1=new studnet("robin",45);
  s1->display();
  delete s1;
  
  return 0;
}