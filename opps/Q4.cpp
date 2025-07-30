#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    void setData(double a, double b, double c) {
        length = a;
        breadth = b;
        height = c;
    }

    double getLength() {
        return length;
    }

    double getBreadth() {
        return breadth;
    }

    double getHeight() {
        return height;
    }

    double getVolume() {
        return length * breadth * height;
    }
};

int main() {
    Box op;
    op.setData(1, 2, 3);
    cout << "Volume: " << op.getVolume() << endl;
    return 0;
}
