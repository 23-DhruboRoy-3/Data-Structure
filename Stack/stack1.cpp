#include<iostream>
using namespace std;

class Stack {
  int size;
  int top;
  int* S;
public:
  Stack(int size) {
    this->size = size;
    top = -1;
    S = new int[size];
  }
  ~Stack() {
    delete[] S;
  }

  void push(int x) {
    if (isFull()) {
      cout << "Stack Overflow" << endl;
    }
    else {
      top++;
      S[top] = x;
      cout << x << " is Pushed into Stack." << endl;
    }
  }

  int pop() {
    int x = 1;
    if (isEmpty()) {
      cout << "Stack Underflow" << endl;
    }
    else {
      x = S[top];
      top--;
      cout << x << " is Poped out of Stack." << endl;
    }
  }
  int peek(int index) {
    int x = -1;
    if (top - index + 1 < 0 || top - index + 1 == size) {
      cout << "invaild Position!" << endl;
    }
    else {
      x = S[top - index + 1];
    }
    return x;
  }

  int isFull() {
    if (top == size - 1) {
      return 1;
    }
    return 0;
  }
  int isEmpty() {
    if (top == -1) {
      return 1;
    }
    return 0;
  }

  int StackTop() {
    int x = 1;
    if (isEmpty()) {
      return -1;
    }
    else {
      return S[top];

    }
  }
  void Display() {
    for (int i = top; i >= 0;i--) {
      cout << S[i] << " ";
    }
    cout << endl;
  }
};
int main() {
  // int a[]= {10,20,30,40,50};
  // Stack st(sizeof(a)/sizeof(a[0]));
  int size;
  cout << "Enter Size: " << endl;
  cin >> size;
  Stack st(size);

  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  st.Display();

  cout << "Full?: " << st.isFull() << endl;
  cout << "Empty?: " << st.isEmpty() << endl;

  st.pop();
  st.pop();
  cout << endl;

  st.Display();

  st.StackTop();
  cout << endl;

  cout << st.peek(2) << endl;

  st.pop();
  st.pop();
  st.pop();
  cout << endl;

  cout << "Empty?: " << st.isEmpty() << endl;


}