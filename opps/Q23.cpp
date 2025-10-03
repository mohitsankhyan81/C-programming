#include <iostream>
using namespace std;

class counter{
  static int n;
  public:
    void count(){
      ++n;
    }
    void display(){
      cout<<"n is "<<n<<endl;
    }
};
int counter::n=0;
int main(){

  counter n;
  n.count();
  n.display();
  n.count();
  n.display();
  n.count();
  n.display();
  return 0;
}