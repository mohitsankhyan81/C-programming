//we have 3 num with dif data types and find the largest from 3 numbers

#include <iostream>
using namespace std;

template <typename t>
int DisplayLargestFromThree(t a,t b,t c){
  if(a>b&&a>c){
    return a;
  }
  else if(b>a&&b>c){
    return b;
  }
  else{
    return c;
  }
}
int main(){
  cout<<DisplayLargestFromThree(4,45,43)<<endl;
  return 0;
}