#include <iostream>
using namespace std;

class student{
  public:
    student(){
      cout<<"student is study now\n";
    }
    ~student(){
      cout<<"Studnet is fail";
    }
};
int main(){
  student s1;
  return 0;
}