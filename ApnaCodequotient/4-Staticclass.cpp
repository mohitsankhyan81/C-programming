#include <iostream>
using namespace std;
class number{
  static int n;
  public:
    void count(){
      n++;
    }
    void display(){
      cout<<"count is "<<n<<endl;
    }
};
int number::n=0;
int main(){
  number n;
  n.count();
  n.display();
  n.count();
  n.display();
  n.count();
  n.display();
  return 0;
}