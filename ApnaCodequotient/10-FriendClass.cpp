#include <iostream>
#include <cstring>
using namespace std;

class Account{
  private:
    char name[18];
    int acc_no;
    float amount;

    public:
      void getData(){
        strcpy(name,"Amit");
        acc_no=35636453;
        amount=23000.00;
      }
      friend void tds_cal(Account);
};

void tds_cal(Account ac){
  float tds;
  tds=ac.amount/10;
  cout<<"Tds of account no. "<<ac.acc_no<<" is Rs "<<tds;
}

int main(){
  Account Acc;
  Acc.getData();
  tds_cal(Acc);
  return 0;
}