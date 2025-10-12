#include <iostream>
using namespace std;

class stat{
  private:
  static int count;
  public:
    void counting(){
      count++;
    }
    void display(){
      cout<<"count is "<<count<<endl;
    }
};

int stat::count=0;

int main(){
  stat n1;
  n1.counting();
  n1.display();
  n1.counting();
  n1.display();
  return 0;
}