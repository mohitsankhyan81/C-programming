#include <iostream>
using namespace std;

class Date
{
    private:
        int day;
        int month;
        int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    public:
        Date(int m,int d){
            month=m;
            day=d;
        }
        
        int daysInMonth(){
            return days[month-1];
        }
    
        int getDay(){
            return day;
        }
    
        int getMonth(){
            return month;
        }
    
        void nextDay(){
            day++;
            if(day>daysInMonth()){
                day=1;
                month++;
                if(month>12) month=1;
            }
        }
    
        string toString(){
            return to_string(month)+"/"+to_string(day);
        }
    
        int absoluteDay(){
            int total=day;
            for(int i=0;i<month-1;i++){
                total+=days[i];
            }
            return total;
        }
};


int main()
{
  int a,b;
  cin>>a>>b;
  Date d(a,b);
  cout<<d.absoluteDay()<<endl;
  cout<<d.daysInMonth()<<endl;
  cout<<d.getDay()<<endl;
  cout<<d.getMonth()<<endl;
  d.nextDay();
  cout<<d.getDay()<<endl;
  cout<<d.getMonth()<<endl;
  cout<<d.toString();
}