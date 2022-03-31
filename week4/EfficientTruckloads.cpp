#include "EfficientTruckloads.h"

static std::vector<int> memorization;

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
    if(memorization.size() == 0) {
        for(int i = 0; i <= numCrates; i++) {
            memorization.push_back(-1);
        }
        memorization.at(0) = 0;
        if(loadSize < numCrates) {
            memorization.at(loadSize) = 1;
        }
    }

    if(numCrates == 0 || loadSize == 0) {
        return 0;
    }

    if(loadSize >= numCrates) {
        return 1;
    }

    if(memorization.at(numCrates) != -1) {
        return memorization[numCrates];
    }

    int first_half = numCrates / 2;
    int second_half = numCrates - first_half;

    memorization.at(numCrates) = numTrucks(first_half, loadSize) + numTrucks(second_half, loadSize);

    return memorization.at(numCrates);

    
}