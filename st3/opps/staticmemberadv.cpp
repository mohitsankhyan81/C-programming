#include <iostream>
using namespace std;

class BankAccount{
  private:
    static int Id;
    string name;
    double amount;

  public:
    BankAccount(string name,double amount){
      this->name=name;
      this->amount=amount;
      Id++;
    }


    void display(){
      cout<<"Id is "<<Id<<"\nName is "<<name<<"\namount is "<<amount<<endl;
    }

};

int BankAccount::Id=0;
int main(){
  BankAccount a("Mohit Sankhyan",453243);
  a.display();
  BankAccount b("Sahil Sharma",45234);
  b.display();
  return 0;
}