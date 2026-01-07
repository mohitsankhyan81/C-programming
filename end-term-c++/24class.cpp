//make the copy constructior

#include <iostream>
using namespace std;

class student{
  private:
    int x;
    int y;
  public:
    student(int x,int y){
      this->x=x;
      this->y=y;
    }
    student(student &a){
      x=a.x;
      y=a.y;
    }

    int display(){
      return x+y;
    }
};

int main(){
  student s1(45,57);
  student s2(s1);
  student s3=s1;

  cout<<s1.display()<<endl;
  cout<<s2.display()<<endl;
  cout<<s3.display()<<endl;
  return 0;
}