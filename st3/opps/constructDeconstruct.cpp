#include <iostream>
using namespace std;

class Car{
  private:
    string brand;
    int price;
  public:
    Car(string brand,int price){
      this->brand=brand;
      this->price=price;
    }

    void display(){
      cout<<"Brand name is "<<brand<<endl;
      cout<<"Price is "<<price<<endl;
    }
    ~Car(){
      cout<<"Destructor Called"<<endl;
    }
};

int main(){
  Car obj1("Tata",4533);
  obj1.display();
  Car obj2("Maruti",4365);
  obj2.display();
  return 0;
}