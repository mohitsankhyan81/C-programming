//make the constructor and destructor

#include <iostream>
using namespace std;

class student{
  public:
    student(){
      cout<<"this is the student class consttuctor"<<endl;
    }
    ~student(){
      cout<<"This is the student class destructor"<<endl;
    }
};
int main(){
  student s1;
  return 0;
}