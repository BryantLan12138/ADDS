#include "Reverse.h"
#include <iostream>
using namespace std;

static int result;
static string str_result;

int Reverse::reverseDigit(int value) {
    // base case
    if(value < 10) {
        return result + value;
    }

    result += value % 10;
    result *= 10;
    return reverseDigit(value / 10);
}

string Reverse::reverseString(string letters) {
    
    if(letters.length() == 1){
        return str_result + letters;
    }

    str_result += letters.back();
    letters = letters.substr(0, letters.length() - 1);
    return reverseString(letters);
}