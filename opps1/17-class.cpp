//deconstructor

#include <iostream>
using namespace std;

class name{
  public:

    name(){
      cout<<"Constructor is"<<endl;
    }
    ~name(){
      cout<<"Destructor is"<<endl;
    }
};

int main(){
  name n;
}