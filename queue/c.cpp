#include <iostream>
using namespace std;

class Queue{
    int size=100;
    int front,rear;
    int arr[100];
    public:
        Queue(){
            front=-1;
            rear=-1;
        }

        void enqueue(int val){
            if(rear==size-1){
                return;
            }
            if(front==-1){
                front++;
            }
            rear++;
            arr[rear]=val;
        }

        int dequeue(){
            if(front==-1){
                return;
            }
            if(front>rear){
                return;
                front=-1;
                rear==-1;
            }
            front++;
        }

        void isfull(){
            if(rear==size-1){
                cout<<"Stack full";
            }
        }

        void isEmpty(){
            if(front==-1){
                cout<<"Stack Empty";
            }
        }

        int Rear(){
            if(front==-1){
                return -1;
            }
            return arr[rear];
        }

        int front(){
            if(front==-1){
                return -1;
            }
            return arr[front];
        }
};

int main(){
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    return 0;
}