#include <iostream>
#include <string>
using namespace std;

class bankAccount{
  private:
    int accoutNumber;
    float balance;
    string name;
    static int totalAccount;

  public:
    bankAccount(int ac,string na,float bal){
      accoutNumber=ac;
      name=na;
      balance=bal;
      totalAccount++;
    }


    void diposit(float amount){
      balance+=amount;
      cout<<"diposit balance = "<<amount<<endl;
    }

    void withdraw(float amount){
      if(amount>balance){
        cout<<"Insafficiend balance!"<<endl;
      }
      else{
        balance-=amount;
        cout<<"withdrown "<<amount<<endl;
      }
    }

    void display(){
      cout<<"account NO -> "<<accoutNumber<<endl;
      cout<<"Name -> "<<name<<endl;
      cout<<"Balance -> "<<balance<<endl;
    }

    static void showtotalaccount(){
      cout<<"Total Account "<<totalAccount<<endl;
    }
};

int bankAccount::totalAccount=0;

int main(){
  bankAccount b1(101,"Mohit",5000);
  bankAccount b2(102,"Sahil",3000);
  bankAccount b3(104,"Ankit",6000);

  b1.diposit(5000);
  b1.withdraw(2000);
  b1.showtotalaccount();
  b1.display();
  return 0;
  
}