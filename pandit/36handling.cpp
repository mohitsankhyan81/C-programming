#include <iostream>
using namespace std;

void Number(int n){
  try{
    if(n==0){
      throw 'x';
    }
    else if(n>0){
      throw n;
    }

    else if(n<0){
      throw 1.0;
    }
    cout<<"End of try block"<<endl;
  }
  catch(char ch){
    cout<<"Caught a null value\n";
  }
  catch(int m){
    cout<<"Caught possitive value\n";
  }
  catch(double d){
    cout<<"Catch a negtive value";
  }
}
int main(){
  Number(7);
  Number(0);
  Number(-2);
  return 0;
}