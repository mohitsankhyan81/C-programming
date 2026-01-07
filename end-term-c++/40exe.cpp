//Exeption handling

#include <iostream>
using namespace std;
int main(){
  int atm_pin;
  double accbalance;
  int pin;
  double withamount;

  cin>>atm_pin>>accbalance>>pin>>withamount;

  cout<<"ATM Account Created Successfully"<<endl;
  cout<<"Stored pin: "<<atm_pin<<endl;
  cout<<"Initial Balance: "<<accbalance<<endl;

  try{
    if(atm_pin!=pin){
      throw "Invalid PIN!";
    }
    else if(withamount<=0){
      throw "Invalid withdrawal amount!";
    }
    else if(withamount>accbalance){
      throw "Insufficent balance";
    }
    else{
      accbalance-=withamount;
      cout<<"Transaction sucessfull"<<endl;
      cout<<"Remaining balance"<<accbalance<<endl;
    }
  }catch(const char* errmsg){
    cout<<errmsg<<endl;
  }
  return 0;
}