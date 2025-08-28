#include <iostream>
using namespace std;

class name{
  public:
    int x;
    static int count;

    name(){
      count++;
    }
};

int name::count=3;

int main(){
  name n1;
  cout<<name::count<<endl;
}