#include <iostream>
using namespace std;

class book{
  private:
    string title;
    string author;
    int price;

  public:
    book(string t,string a,int p){
      title=t;
      author=a;
      price=p;
    }

    book(const book &b){
      title=b.title;
      author=b.author;
      price=b.price;
    }
    void display(){
      cout<<"Book title is "<<title<<". Book author is "<<author<<". Book Price "<<price<<"."<<endl;
    }
};
int main(){
  book b1("Mathamatics","RD. Sharma",453);
  b1.display();
  book b2(b1);
  b2.display();
  return 0;
}