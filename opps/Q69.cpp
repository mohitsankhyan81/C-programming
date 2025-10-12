#include <iostream>
using namespace std;


class Cout{
  private:
    string name;
    static int totalcount;
  public:
    Cout(string n){
      name=n;
      totalcount++;
    }

    void display(){
      cout<<"The sr no is "<<totalcount<<" THe name is "<<name<<endl;
    }
};
int Cout::totalcount=0;
int main(){
  Cout c1("mohit");
  c1.display();
  Cout c2("Static");
  c2.display();
  return 0;
}