//construtor and dectrouctor

#include <iostream>
using namespace std;


class Number{
    private:
        double number;
        
    public:
        Number(double num){
            number=num;
            cout<<"structor "<<endl;
            cout<<"Number: "<<number<<endl<<endl;
        }
        ~Number(){
            cout<<"destructor execoutiong!"<<endl;
            cout<< "Numberr : "<< number<< endl <<endl;
        }
};
void test(){
    Number six(6);
}
int main(){
    test();
    Number severn(7);
    return 0;
}