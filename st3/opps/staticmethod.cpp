#include <iostream>
using namespace std;

class Name{
  private:
    static int count;

  public:

    void counts(){
      count++;
    }
    void display(){
      cout<<"Count is "<<count<<endl;
    }
};

int Name::count=0;
int main(){

  Name n;
  n.counts();
  n.display();
  n.counts();
  n.display();
  return 0;
}