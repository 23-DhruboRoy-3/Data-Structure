#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
  int i, j, temp;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << " " << arr[i] << endl;
  }
}

int main()
{

  int n;
  cout << "Input the number of elements :";
  cin >> n;
  int arr[n];
  cout << "Input elements :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Original array :" << endl;
  printArr(arr, n);
  bubbleSort(arr, n);
  cout << "Sorted array :" << endl;
  printArr(arr, n);
}