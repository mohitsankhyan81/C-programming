#include <iostream>
using namespace std;

class book{
  protected:
    string name;
    string authorname;
  public:
    book(string n,string a){
      name=n;
      authorname=a;
    }
};

class bookdetails:public book{
  private:
    int page;
    int price;

  public:
    bookdetails(string n,string a,int p,int pr):book(n,a){
      page=p;
      price=pr;
    }

    void display(){
      cout<<"name is "<<name<<"author name is \n"<<authorname<<"page "<< page<<"price "<<price<<endl;
    }
};

int main(){
  bookdetails b1("alkdjj","asdkflj",235,45);

  b1.display();
}