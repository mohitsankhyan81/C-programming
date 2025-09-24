#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class TollBooth{
    private:
        int cars;
        int cash;
    public:
        TollBooth(){
            cars=0;
            cash=0;
        }
    
        void payingCar(){
            cars++;
            cash+=50;
        }
    
        void nopayCars(){
            cars++;
        }
        void display(){
            cout<<"Total Cash : "<<cash<<"/-"<<endl<<"Total Cars : "<<cars; 
        }
};
using namespace std;

int main()
{
    TollBooth t;
    char c;
    while(cin>>c){
        if(c=='p'){
            t.payingCar();
        }
        else if(c=='n'){
            t.nopayCars();
        }
        else if(c=='q'){
            t.display();
        }
    }
    return 0;
}