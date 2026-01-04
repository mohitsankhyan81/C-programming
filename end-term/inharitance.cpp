#include <iostream>
using namespace std;

class student{
  protected:
    string name;
    int age;
    int rollNo;
  public:
    student(string name,int age,int rollNo){
      this->name=name;
      this->age=age;
      this->rollNo=rollNo;
    }

    ~student(){
      cout<<"This is student class de-constructor"<<endl;
    }
};

class marks:protected student{
  protected:
    int m1;
    int m2;
    int m3;
  public:
    marks(string name,int age,int rollNo,int m1,int m2,int m3):student(name,age,rollNo){
      this->m1=m1;
      this->m2=m2;
      this->m3=m3;
    }

   ~marks(){
      cout<<"This is marks class destructor"<<endl;
   }
};

class grade:protected marks{
  private:
    int total;
    int persentage;
  public:
    grade(string name,int age,int rollNo,int m1,int m2,int m3):marks(name,age,rollNo,m1,m2,m3){

    }
    int totalis(){
      total=m1+m2+m3;
      return total;
    }

    int persentageis(){
      persentage=totalis()/3;
      return persentage;
    }

    void display(){
      cout<<"Name is "<<name<<endl;
      cout<<"Age is "<<age<<endl;
      cout<<"Roll No is "<<rollNo<<endl;
      cout<<"Total is "<<totalis()<<endl;
      cout<<"Persentage is "<<persentageis()<<endl;
    }
};
int main(){
  grade g1("mohit sankhyan",34,45,45,34,34);
  g1.display();
  return 0;
}