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

  node* print = Head;
  cout << "Linked List" << endl;

  while (print != NULL) {
    cout << print->data << " ";
    print = print->next;
  }

  int x;
  cout << "\nEnter the Position:";
  cin >> x;
  int value = 30;

  node* temp = Head;
  x--;

  while (x--) {
    temp = temp->next;
  };

  node* temp2 = new node(100);
  temp2->next = temp->next;
  temp->next = temp2;

  cout << "After Inserting at Particular:" << endl;
  node* print2 = Head;
  while (print2 != NULL) {
    cout << print2->data << " ";
    print2 = print2->next;
  }

}