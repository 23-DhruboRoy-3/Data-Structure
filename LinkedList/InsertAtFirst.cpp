#include <iostream>
using namespace std;

class node {
public:
  int data;
  node* next;
  node(int value) {
    data = value;
    next = NULL;
  }
};

int main() {
  node* Head;
  Head = new node(5);
  node* Sec = new node(6);
  node* Third = new node(7);
  node* Fourth = new node(8);

  Head->next = Sec;
  Sec->next = Third;
  Third->next = Fourth;



  if (Head == NULL) {
    Head = new node(10);
  }
  else {
    node* temp;
    temp = new node(4);
    temp->next = Head;
    Head = temp;
  }
  cout << "\nAfter Inserting at The Beginning:" << endl;
  node* temp2 = Head;
  while (temp2 != NULL) {
    cout << temp2->data << " ";
    temp2 = temp2->next;
  }


}