#include <iostream>
using namespace std;

class Mobile{
    private:
    string company_name;
    string brand;
    int price[];
    public:
    Mobile(string C,string b, int p[]){
     company_name=C;
     brand=b;
     for(int i=0;i<3;i++)
     price[i]=p[i];
    }
    ~Mobile(){
        cout<<"company_name,brand,object is destroyed"<<endl;
    }
    void display(){
        cout<<" company_name: "<< company_name<< " brand: "<< brand <<endl;
        for(int i=0;i<3;i++){
            cout<<price[i]<<endl;
        }
    } 

    void minimumprice(){
    int min=price[0];
    for(int i=0;i<3;i++){
      if(price[i]<min){
        min=price[i];
      }
    }
    cout<<"Minumum price "<<min<<endl;
}
};


int main(){
    int a[]={1,2,3};
    Mobile m1("ABC","gimini",a);
    m1.display();
    m1.minimumprice();
    return 0;
}