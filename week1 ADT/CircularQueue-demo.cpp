#include "CircularPersonQueue.h"
// #include "CircularQueue.h"
#include <iostream>

using namespace std;

int main(void) {
	// CircularQueue<string,5> bankQueue; // using templates
	CircularQueue bankQueue(5);  // using a class that only stores strings
	bankQueue.add("Cheryl");
	bankQueue.add("Nick");
	bankQueue.add("Brad");
	cout << bankQueue.remove() << endl;
	bankQueue.add("Frank");
	bankQueue.add("Ian");
	bankQueue.add("Chitchanok");


	cout << bankQueue.remove() << endl;
	cout << bankQueue.remove() << endl;
	cout << bankQueue.remove() << endl;
	cout << bankQueue.remove() << endl;
	cout << bankQueue.remove() << endl;
	cout << bankQueue.remove() << endl;

	return 0;
}