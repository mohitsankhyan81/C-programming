#include <iostream>
using namespace std;
int main(){
  int arr[5]={1,2,3,4,5};
  int index;

  cout<<"Enter form (0 to 4)";
  cin>>index;


  try{
    if(index<0 ||index>=5){
      throw "Invalid index! Array index out of range.";
    }
    cout<<"Value at index "<<index<<" = "<<arr[index]<<endl;
  }
  catch(const char* e){
    cout<<"error "<<e<<endl;
  }
  return 0;
}