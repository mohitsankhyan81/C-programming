// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 class student{
     protected:
     int rollno;
     string name;
     public:
     student(int r,string n){
         rollno=r;
         name=n;
     }
     ~student(){
         cout<<"this is name"<<endl;
     }
 };
 class marks:public student{
     protected:
     int m1;
     int m2;
     int m3;
     public:
     marks(int r,string n,int a,int b,int c):student(r,n){
         m1=a;
         m2=b;
         m3=c;
     }
     ~marks(){
     cout<<"this is student"<<endl;
     }
      };
      class grade:public marks{
         protected:
         float total;
         float percentage;
         char gradestd;
         public:
         grade(int r,string n,int a,int b,int c):marks(r,n,a,b,c){}

             ~grade(){
                 cout<<"this is grade"<<endl;
             }

             void display(){
                 total=m1+m2+m3;
                 percentage=total/3;
                 if(percentage>=75){
                     gradestd='A';
                 }
                 else if(percentage>=64 && percentage<74){
                     gradestd='B';
                 }
                 else if(percentage>=50 && percentage<59){
                     gradestd='C';
                 }
                  cout<<rollno<<endl;
                 cout<<name<<endl;
                 cout<<percentage<<endl;
                 cout<<gradestd<<endl;
                }
         
         };
      
int main() {
    grade g1(101, "Alice", 80, 70, 90);
    g1.display();
}
