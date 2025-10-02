#include<iostream>
using namespace std;


class distances{
  private:
    int feet,inch;
    void normalize(){
      if(inch>=12){
        feet+=inch/12;
        inch=inch%12;
      }
    }
  public:
    void readDistance(){
      cin>>feet>>inch;
      normalize();
    }
    void display(){
      cout<<feet<<"'"<<inch<<"\"";
    }
    distances operator+(distances d){
      distances temp;
      temp.feet=feet+temp.feet;
      temp.inch=inch+temp.inch;
      temp.normalize();
      return temp;
    }

    distances operator -(distances d){
      distances temp;
      int total1=feet*12*inch;
      int total2=d.feet*12+d.inch;
      int diff=total1-total2;
      temp.feet=diff/12;
      temp.inch=diff%12;
      return temp;
    }
};
int main(){
  distances d1,d2,d3,d4;
  d1.readDistance();
  d2.readDistance();
  d3=d1+d2;
  d4=d1-d2;
  d3.display();
  cout<<endl;
  d4.display();
  return 0;
}