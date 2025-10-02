#include <iostream>
using namespace std;
class Person{
public:
string name;
int age;

Person(string n, int a){
name = n;
age = a;
}
void showdata(){
    cout<< "name: " << name << endl;
    cout<< "age: " << age << endl;
}
};

class Student: public Person{
int studentId;

public:
Student(string n, int a, int id) : Person(n,a){
    studentId = id;
}

void display(){
    showdata();
    cout << "studentId: " << studentId << endl;
}
};

int main(){
    Student s("abc",20,1001);
    s.display();    
}
