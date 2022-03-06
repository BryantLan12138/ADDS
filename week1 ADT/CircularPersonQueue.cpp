/*
   Circular Queue class interface
*/

#include "CircularPersonQueue.h"

using namespace std;

CircularQueue::CircularQueue(int capacity) {
  front = 0;
  currentSize = 0;
  maxSize = capacity;
}

void CircularQueue::add(string value) {  // add a person to the queue
  int location = (currentSize + 1) % maxSize;
  if (location != front) {
    values.at(location) = value;
    currentSize++;
  }
}

  // remove next person from queue
string CircularQueue::remove() {
  string first = "empty";

  if (values.size() != 0) {
      currentSize--;
      int old_front = front;
      front = (front + 1) % maxSize;
      first = values.at(old_front);
  }


  return first;
}