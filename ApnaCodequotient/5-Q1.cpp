#include <iostream>
using namespace std;

class Rectangle
{
    public:
        int x;
        int y;
        int width;
        int height;
        
    Rectangle(int x,int y,int width,int height){
        this->x=x;
        this->y=y;
        this->width=width;
        this->height=height;
    }
    int getHeight(){
        return height;
    }
    int getWidth(){
        return width;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    string toString(){
        return "Rectangle[x="+to_string(x)+",y="+to_string(y)+",width="+to_string(width)+",height="+to_string(height)+"]";
    }
    };


int main()
{
  Rectangle r1(5,2,7,3);
  Rectangle r2(13,27,2,42);
  Rectangle r3(2,3,4,5);

  cout<<r1.getX()<<endl;
  cout<<r1.getY()<<endl;
  cout<<r1.getWidth()<<endl;
  cout<<r1.getHeight()<<endl;
  cout<<r1.toString()<<endl;

  cout<<r2.getX()<<endl;
  cout<<r2.getY()<<endl;
  cout<<r2.getWidth()<<endl;
  cout<<r2.getHeight()<<endl;
  cout<<r2.toString()<<endl;

  cout<<r3.getX()<<endl;
  cout<<r3.getY()<<endl;
  cout<<r3.getWidth()<<endl;
  cout<<r3.getHeight()<<endl;
  cout<<r3.toString();

  return 0;

}