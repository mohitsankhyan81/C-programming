#include <iostream>
using namespace std;


class student{
  private:
    string name;
    int marks;
  
  public:
    void input(){
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter marks: ";
      cin>>marks;
    }

    void display(){
      cout<<"Name: "<<name<<",Marks: "<<marks<<endl;
    }
};

int main(){
  int n;
  cout<<"Enter number of studnets: ";
  cin>>n;

  student* students =new student[n];//danamic array
  for(int i=0;i<n;i++){
    cout<<"Student "<<i+1<<":\n";
    students[i].input();
  }

  cout<<"\nStudent Details:\n";
  for(int i=0;i<n;i++){
    students[i].display();
  }

  delete[] students;
  return 0;
}