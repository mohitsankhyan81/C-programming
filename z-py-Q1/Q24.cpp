//liner search find giver value in array
#include <iostream>
using namespace std;
int LinearSearch(int array[],int size,int key){
    for(int i=0;i<size;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(array)/sizeof(int);
    int key=7;
    cout<<LinearSearch(array,size,key)<<endl;
}