//Find samllest no of array

#include <iostream>
using namespace std;
int main(){
    int number[5]={65,71,24,11,94};
    int small=INT8_MAX;
    for(int i=0;i<5;i++){
        if(number[i]<small){
            small=number[i];
        }
    }
    cout<<"smallest value is "<<small<<endl;
}