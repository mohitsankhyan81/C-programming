#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    try {
        if (b == 0)
            throw "Divide by 0 is not allowed!";
        cout << "a / b = " << a / b << endl;
    }
    catch (const char* e) {
        cout << "Error: " << e << endl;
    }

    return 0;
}
