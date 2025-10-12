#include <iostream>
using namespace std;

class count{
  static int number;

  public:
    count(){
      ++number;
      cout<<"constructor number is "<<number<<endl;
    }
    ~count(){
      --number;
      cout<<"destructor number is "<<number<<endl;
    }
};

int count::number=0;

int main(){
  count a,b;
  {
    count c;
  }
  count d;
  
  return 0;
}