// print the element of array using loop

#include <iostream>
using namespace std;
int main(){
    int marks[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(marks)/sizeof(int);

    for(int i=0;i<=size;i++){
        cout<<marks[i]<<endl;
    }
}