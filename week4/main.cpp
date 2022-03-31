#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <iostream>

using namespace std;

int main() {
    Reverse reverse;
    Truckloads truck;
    EfficientTruckloads efficient;
    cout << efficient.numTrucks(14 ,3) << endl;
    return 0;
}