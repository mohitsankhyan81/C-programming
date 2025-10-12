// valid tringle
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    cout<<"enter c";
    cin>>c;
    if((a<(b+c))&&(b<(a+c))&&(c<(a+b))){
        cout<<"valid tringle";
    }
    else{
        cout<<"not valid tringle";
    }
}