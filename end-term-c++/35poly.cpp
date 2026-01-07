// pure virtual fuction

#include <iostream>
using namespace std;

class phone{
  public:
    virtual void imp()=0;
};

class charger:public phone{
  public:
    void imp() override{
      cout<<"Charger is use to charge the phone"<<endl;
    }
};

class earbuds:public phone{
  public:
    void imp() override{
      cout<<"Earbuds use to listen the music"<<endl;
    }
};
int main(){
  phone* p;
  charger c;
  earbuds e;
  p=&c;
  p->imp();
  p=&e;
  p->imp();
  return 0;
}