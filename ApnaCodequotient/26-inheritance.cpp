//Hierarichical inharitance

#include <iostream>
using namespace std;
class Account{
  protected:
  int accno;
  public:
    void get_accno(int an){
      accno=an;
    }
    void show_accno(){
      cout<<"Account no : "<<accno;
    }
};

class saving_account:public Account{
  float Amount;
  public:
  void get_data(int a,float b){
    get_accno(a);
    Amount=b;
  }
  void showdata(){
    show_accno();
    cout<<"Ballance is : "<<Amount<<endl;
  }
};


class fixed_account:public Account{
  float Amount;
  public:
  void get_data(int a,float b){
    get_accno(a);
    Amount=b;
  }
  void showdata(){
    show_accno();
    cout<<" Balance: "<<Amount<<endl;
  }
};

class Current_Account:public Account{
  float Amount;
  public:
  void get_data(int a,float b){
    get_accno(a);
    Amount=b;
  }
  void show_data(){
    show_accno();
    cout<<" Balance : "<<Amount<<endl;
  }
};

int main(){
  saving_account s1;
  Current_Account c1;
  fixed_account f1;

  s1.get_data(4525425,54634.56);
  c1.get_data(4546546,57677.43);
  f1.get_data(564567,4255.76);


  s1.showdata();
  c1.show_data();
  f1.showdata();
  return 0;
}