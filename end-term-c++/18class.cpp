// class the static fuction count++

#include <iostream>
using namespace std;

class countdata{
  private:
    static int count;
  public:
    void setcount(){
      count++;
    }
    void display(){
      cout<<count<<endl;
    }
};

int countdata::count=0;

int main(){
  countdata c1,c2,c3;
  c1.setcount();
  c1.display();
  c2.setcount();
  c2.display();
  c3.setcount();
  c3.display();
  return 0;
}