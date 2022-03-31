#include "Truckloads.h"
using namespace std;

static int result;

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if(numCrates == 0 || loadSize == 0) {
        return 0;
    }

    if(loadSize >= numCrates) {
        return 1;
    }

    // odd number
    if(numCrates % 2 != 0) {
        int first_half = numCrates / 2;
        int second_half = numCrates - first_half;
        return numTrucks(first_half, loadSize) + numTrucks(second_half, loadSize);
    }
    else {
        numCrates = numCrates / 2;
        result++;
    }
    

    return numTrucks(numCrates, loadSize) + numTrucks(numCrates, loadSize);
}