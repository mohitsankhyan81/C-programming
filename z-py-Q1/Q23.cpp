// maximum no of array

#include <iostream>
using namespace std;
int main(){
    int number[10]={30,45,98,100,120};
    int max=INT8_MIN;
    for(int i=0;i<10;i++){
        if(number[i]>max){
            max=number[i];
        }
    }
    cout<<"max is "<<max<<endl;
}