/*
   Circular Queue class interface
*/

#ifndef CIRC_QUEUE_H
#define CIRC_QUEUE_H

#include <vector>
#include <string>

class CircularQueue {
 public:

  CircularQueue(int capacity);
  
  void add(std::string value);  // add a person to the queue

  // remove next person from queue
  std::string remove();
  
 private:
  int front;
  int currentSize;
  int maxSize;
  std::vector<std::string> values;
};

#endif // CIRC_QUEUE_H