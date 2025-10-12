#include <iostream>
using namespace std;
class person{
  public:
    string name;
    string color;
    int no_of_eye;
    int debut_year;

    person(string name,string color,int no_of_eye,int debut_year){
      this->name=name;
      this->color=color;
      this->no_of_eye=no_of_eye;
      this->debut_year=debut_year;
    }
};
class Actor:public person{
  public:
  Actor(string name,string color,int no_of_eye,int debut_year):person(name,color,no_of_eye,debut_year){};

  string toString(){
    return "the person "+name+" is an Actor. he is "+color+"in color , has "+to_string(no_of_eye)+" eyes and debut in "+to_string(debut_year)+"\n"; 
  }
};
class Actress:public person{
  public:
  Actress(string name,string color,int no_of_eye,int debut_year):person(name,color,no_of_eye,debut_year){};

  string toString(){
    return "the person "+name+" is an Actress. She is "+color+ " is color ,has "+ to_string(no_of_eye) +" eye is debut in "+to_string(debut_year)+"\n";
  }
};
int main(){
  Actor a1("Mohit","lamia",35,45);
  Actress a2("ankit","chamiya",45,65);

  cout<<a1.toString();
  cout<<a2.toString();
  return 0;
}