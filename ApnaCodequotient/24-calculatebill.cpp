#include <iostream>
using namespace std;
class bill {
  public:
  int item_price,qty,total_bill;
  void getbill(){
    cin>>item_price>>qty;
    total_bill=item_price*qty;
  }
};


class cash:public bill{
  int n2000,n500,n100,n50,n10,total_cash;
  public:
    void get_cash(){
      getbill();
      cin>>n2000>>n500>>n100>>n50>>n10;
      total_cash=n2000*2000+n500*500+n100*100+n50*50+n10*10;
    }
    void display(){
      if(total_cash==total_bill){
        cout<<"Clear\n";
      }
      else if(total_cash>total_bill){
        cout<<"Clear Balance: "<<total_cash-total_bill<<"\n";
      }
      else{
        cout<<"Need to pay: "<<total_bill-total_cash<<"\n";
      }
    }
};
int main(){
  cash d;
  d.get_cash();
  d.display();
  return 0;
}