#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class book{
protected:
string name;
string authername;
public:
book(string n,string a){
name=n;
authername=a;
}
};
class bookdetail:public book{
    private:
int price;
int page;
public:
    bookdetail(string n,string a,int p,int b):book(n,a){
    price=p;
    page=b;
}
void display(){
    cout<<"name is "<<name<<"authername is  "<<authername<<"price is "<<price<<endl;
}
};
int main()
{
    bookdetail b1("abc","cde",454,454);
    b1.display();
   return 0;
}
