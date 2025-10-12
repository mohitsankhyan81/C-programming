// leap year or not

#include <iostream>
using namespace std;
int leap(int year){
    if((year % 4== 0 && year % 100 != 0)|| year%400 ==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int year;
    cout<<"enter year"<<endl;
    cin>>year;
    if(leap(year)){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"not leap year"<<endl;
    }
}