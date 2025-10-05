#include <iostream>
using namespace std;

class Student{
  public:
    string name;
    int rollNumber;
    int marks;


    void input(){
      cin>>name;
      cin>>rollNumber;
      cin>>marks;
    }

    void display(){
      cout<<"Name is "<<name<<endl;
      cout<<"ROll No is "<<rollNumber<<endl;
      cout<<"marks is "<<marks<<endl;
    }
};

int main(){
  Student s1;
  s1.input();
  s1.display();
  return 0;
}