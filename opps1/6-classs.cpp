#include <iostream>
#include <string>
using namespace std;
class name{
  public:
    int x;
    static int count;

    name(){
      count++;
    }
};

int name::count=0;

int main(){
  name n1;
  cout<<name::count<<endl;
  return 0;
}