#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"A Grade";
    }
    else if(marks>=80&&marks<90){
        cout<<"grade B";
    }
    else{
        cout<<"Grade C";
    }
}