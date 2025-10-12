#include <iostream>
#include <iomanip>
using namespace std;

class Sports{
  protected:
    int Sportsmarks;
  public:
    Sports(){
      Sportsmarks=0;
    }
    Sports(int m){
      Sportsmarks=m;
    }

};

class Acadmics{
  protected:
    int acadmicsmarks;
  public:
    Acadmics(){
      acadmicsmarks=0;
    }
    Acadmics(int a){
      acadmicsmarks=a;
    }

};

class Result:public Sports,Acadmics{
  public:
    int total;
    double persentage;

  public:
    Result(){
      total=0;
      persentage=0;
    }
    Result(int m,int a):Sports(m),Acadmics(a){
      total=0;
      persentage=0;
    }

    void inputdata(){
      cin>>Sportsmarks;
      cin>>acadmicsmarks;
    }
    
    void result(){
      total=Sportsmarks+acadmicsmarks;
      persentage=total/2.0;

      cout<<"Total marks "<<total<<endl;
      cout<<"Persentage "<<fixed<<setprecision(2)<<persentage<<endl;
    }
};


int main(){
  Result r1;
  r1.inputdata();
  r1.result();
  Result r2;
  r2.inputdata();
  r2.result();
  return 0;
}