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
  // cout << Head->data << endl;
  // cout << Head->next << endl;

  node* Sec = new node(6);
  node* Third = new node(7);
  node* Fourth = new node(8);
  Head->next = Sec;
  Sec->next = Third;
  Third->next = Fourth;


  node* temp = Head;
  cout << "Linked List" << endl;

  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }

  if (Head != NULL) {

    node* curr = Head;
    node* prev = NULL;
    int x = 2;
    x--;

    while (x--) {
      prev = curr;
      curr = curr->next;
    }
    prev->next = curr->next;
    delete  curr;
  }



  cout << "\nAfter Deleting at The Beginning:" << endl;
  node* temp2 = Head;
  while (temp2 != NULL) {
    cout << temp2->data << " ";
    temp2 = temp2->next;
  }


}
