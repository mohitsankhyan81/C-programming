#include <iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    for(int i=0;i<7;i++){
        cout<<"i = "<<a<<endl;
        int c= a+b;
        a=b;
        b=c;
    }
  return 0;
}