#include <iostream>
using namespace std;
int main() {
    int array[5] = {11, 1, 5, 10, 6}; 
    int n = 5;
    cout << "Enter the index at which you want to insert: ";
    int pos, element;
    cin >> pos;
    if (pos == 5) { 
        cout << "Enter the element: ";
        cin >> element;
        array[pos] = element; 
        n++;
    } 
    else if (pos < 5) { 
        cout << "Enter the element you want to insert: ";
        cin >> element;
        for (int i = n; i > pos; i--) {
            array[i] = array[i - 1];
        }
        array[pos] = element;
        n++; 
    } 
    else {
        cout << "\nArray index out of bounds";
    }
    cout << "\nNew Array: ";
    for (int i = 0; i < n; i++) {
        cout << " " << array[i];
    }
}
