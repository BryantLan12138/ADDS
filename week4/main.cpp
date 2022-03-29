#include "Reverse.h"
#include <iostream>

using namespace std;

int main() {
    Reverse reverse;
    string tmp = "helloworld";
    cout << reverse.reverseDigit(9876) << endl;
    cout << reverse.reverseString("helloworld") << endl;
    return 0;
}