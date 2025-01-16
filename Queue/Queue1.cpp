#include<iostream>
using namespace std;
class Queue {
  int size;
  int front;
  int rear;
  int* Q;

public:
  Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new int[size];
  }
  ~Queue() {
    delete[] Q;
  }

  int isFull() {
    if (front == rear == size - 1) {
      return 1;
    }
  }
  int isEmpty() {
    if (front == rear) {
      return 1;
    }
  }

};
int main() {

}