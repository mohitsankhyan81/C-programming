//calculate N factorial

#include <iostream>
using namespace std;
int fact(int n){
int res=1;
for(int i=1;i<=n;i++){
    res=res*i;
}
return res;
}
int main(){
    int n;
    cout<<"enter value of n "<<endl;
    cin>>n;
    int val=fact(n);
    cout<<"fact is :  "<<val;
}