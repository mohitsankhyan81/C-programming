#include <iostream>
using namespace std;
 
class Box{
    private:
    int lenght;
    int breadth;
    
    public:
    Box(int l, int b){
        lenght=l;
        breadth=b;
    }
    
    ~Box(){
        cout << "object destroyed";
    }
    
    void display(){
      cout<<lenght<<breadth<<lenght+breadth<<endl;
    }

    bool operator >(const Box &b){
      return (lenght*breadth)>(b.lenght*b.breadth);
    }
};

int main(){
  Box b1(45,45);
  Box b2(56,45);

  if(b1>b2){
    cout<<"Box 1 is greater";
  }
  else{
    cout<<"box 2 is greater";
  }

  b1.display();
  b2.display();

}