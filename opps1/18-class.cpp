#include <iostream>
using namespace std;

int count=0;
class Count{
  public:
  Count(){
    count++;
    cout<<"Increment : "<<count<<endl;
  }
  ~Count(){
    cout<<"Dicrement : "<<count<<endl;
    count--;
  }
};
int main(){
  Count c1,c2,c3,c4;
}