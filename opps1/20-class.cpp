//deep copy

#include <iostream>
using namespace std;


class box{
  private:
    int length;
    int *breadth;
    int height;

  public:
    //constructor
    box(){
      breadth=new int;
    }

    //function to set the dimensions of the Box
    void set_dimensions(int len,int brea,int heig){
      length=len;
      *breadth=brea;
      height=heig;
    }

    //function to show the dimension of the box
    void show_data(){
      cout<<"length =" <<length
      <<" "<<"breadth ="<<*breadth
      <<" "<<"height ="<<height
      <<endl;
    }

    //parametrized constructor for implementing deep copy 
    box(const box& sample){
      length=sample.length;
      breadth=new int;
      *breadth=*(sample.breadth);
      height=sample.height;
    }

    //destructor
    ~box(){
      delete breadth;
    }
};
int main(){
    box first;

    //set the dimeter 
    first.set_dimensions(45,34,45);

    //display the dimentions

    first.show_data();

    //when the data will be copied then 
    //all the resources will also ger 
    //allocate to the noew object

    box secod=first;
    secod.show_data();
  return 0;
}