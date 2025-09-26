#include <iostream>
using namespace std;

//input this
// 2 130
// 1 70
// 3 80

class TimeSpan
{
  private:
    int hour;
    int minu;
    
  public:
    TimeSpan(int h,int m){
        hour=h;
        minu=m;
        if(minu>=60){
            hour+=minu/60;
            minu=minu%60;
        }
    }
    int getHours(){
        return hour;
    }
    int getMinutes(){
        return minu;
    }
    void add(int h,int m){
        hour+=h;
        minu+=m;
        if(minu>=60){
            hour+=minu/60;
            minu=minu%60;
        }
    }
    void add(TimeSpan &t){
        hour+=t.hour;
        minu+=t.minu;
        if(minu>=60){
            hour+=minu/60;
            minu=minu%60;
        }
    }
    double getTotalHours(){
        return hour+minu/60.0;
    }
    string toString(){
        return to_string(hour)+" Hours, "+to_string(minu)+" Minutes";
    }
};


int main()
{
  int a1,a2,a3,a4,a5,a6;
  cin>>a1>>a2>>a3>>a4>>a5>>a6;
  TimeSpan t1(a1,a2);
  TimeSpan t2(a3,a4);
  cout<<t1.getHours()<<endl;
  cout<<t1.getMinutes()<<endl;
  cout<<t1.toString()<<endl;
  t1.add(a5,a6);

  cout<<t1.getHours()<<endl;
  cout<<t1.getMinutes()<<endl;
  t1.add(t2);

  cout<<t1.getHours()<<endl;
  cout<<t1.getMinutes()<<endl;
  cout<<t1.getTotalHours();

  return 0;
}