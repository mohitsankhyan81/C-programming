#include <iostream>
using namespace std;

class counter{
  private:
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
  counter c1;

  c1.count();
  c1.display();
  c1.count();
  c1.display();
  c1.count();
  c1.display();
  return 0;
}