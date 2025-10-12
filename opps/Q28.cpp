#include <iostream>
using namespace std;

class BankAccount{
  private:
    int accountNumber,balance;
    static int totalaccount;
  public:
    BankAccount(int a,int b){
      accountNumber=a;
      balance=b;
      totalaccount++;
    }

    void displayAccountno(){
      cout<<"Account no is "<<accountNumber<<endl;
    }

    void displaybalance(){
      cout<<"Your balance is "<<balance<<endl;
    }

    static void shawtotalaccountno(){
      cout<<"Your Total Account No "<<totalaccount<<endl;
    }

};

int BankAccount::totalaccount=0;

int main(){
  BankAccount a1(452452,32154141);
  a1.displayAccountno();
  a1.displaybalance();
  a1.shawtotalaccountno();

  BankAccount b1(42524,43214324);
  b1.displayAccountno();
  b1.displaybalance();
  b1.shawtotalaccountno();


  return 0;
}