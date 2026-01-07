//check age person is elegible for the vote or not 

#include <iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enter your age: ";
  cin>>age;
  try{
    if(age<18){
      throw age;
    }
    cout<<"Eligible"<<endl;
  }
  catch(int ){
    cout<<"Not Eligible"<<endl;
  }
  return 0;
}