#include <iostream>
using namespace std;

template <class t>
class findmin{
  public:
    t arr[100];
    int n;

    findmin(t a[],int size){
      n=size;
      for(int i=0;i<n;i++){
        arr[i]=a[i];
      }
    }

    t tomin(){
      t min=arr[0];
      for(int i=0;i<n;i++){
        if(arr[i]<min){
          min=arr[i];
        }
      }
      return min;
    }
};
int main(){
  int a1[]={67,45,67,45,2};
  int a2[]={34,56,45,56,2};

  findmin<int> obj1(a1,5);
  findmin<int> obj2(a2,5);

  cout<<"min is "<<obj1.tomin()<<endl;
  cout<<"min is "<<obj2.tomin()<<endl;
  return 0;
}