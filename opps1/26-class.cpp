#include <iostream>
#include <cstring>
using namespace std;

class krish {
    char str[100];
public:
    krish(const char s[] = "") {
        strcpy(str, s);
    }

    
    bool operator == (krish obj) {
        return strcmp(str, obj.str) == 0;
    }
};

int main() {
    krish s1("Krish"), s2("Krish"), s3("Mohit");

    if(s1 == s2)
        cout << "s1 and s2 are equal" << endl;
    else
        cout << "s1 and s2 are not equal" << endl;

    if(s1 == s3)
        cout << "s1 and s3 are equal" << endl;
    else
        cout << "s1 and s3 are not equal" << endl;

    return 0;
}