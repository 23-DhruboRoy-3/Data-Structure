#include <iostream>
using namespace std;
void SelectionSort(int array[], int n) {
  for (int i = 0;i < n - 1;i++) {
    int min = i;
    for (int j = i + 1;j < n;j++) {
      if (array[min] > array[j]) {
        min = j;
      }
    }
    int temp = array[i];
    array[i] = array[min];
    array[min] = temp;
  }
}

int main() {

  cout << "Array:" << endl;
  int array[] = { 12, 18, 13, 5, 6,10,15,20,17 };
  int n = sizeof(array) / sizeof(array[0]);

  for (int i = 0;i < n;i++) {
    cout << array[i] << " ";
  }

  cout << "\nSorted Array:" << endl;
  SelectionSort(array, n);
  for (int i = 0;i < n;i++) {
    cout << array[i] << " ";
  }

}