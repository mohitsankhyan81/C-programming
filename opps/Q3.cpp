#include <iostream>
using namespace std;

class Sum {
private:
    int num1;
    int num2;

public:
    void setData(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int getA() {
        return num1;
    }

    int getB() {
        return num2;
    }

    void printData() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }

    int sum(int a, int b) {
        return a + b;
    }
};

int main() {
    Sum obj;
    obj.setData(10, 20);
    obj.printData();
    cout << "getA(): " << obj.getA() << endl;
    cout << "getB(): " << obj.getB() << endl;
    cout << "Sum: " << obj.sum(obj.getA(), obj.getB()) << endl;
    return 0;
}
