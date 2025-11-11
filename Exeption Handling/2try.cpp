#include <iostream>
using namespace std;
int main(){
  int a;
  cin>>a;
  try
  {
    if(a>0){
      throw "a is possitive";
    }
    else if(a<0){
      throw "a is negetive";
    }
    else{
      throw "a is 0";
    }
  }
  catch(const char* e)
  {
    cout<<e<<endl;
  }
  
  return 0;
}