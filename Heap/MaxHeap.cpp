#include<iostream>
using namespace std;

class MaxHeap{
    int *arr;
    int size;
    int totalSize;

    public:
    MaxHeap(int n){
        arr = new int[n];
        size = 0;
        totalSize = n;
    }
    void insert(int value){
        
        if(size == totalSize){
            cout<<"Heap is full"<<endl;
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        while(index >0 && arr[(index-1)/2]<arr[index]){
            swap(arr[index], arr[(index-1)/2]);
            index = index/2;
        }
        cout<<arr[index]<<" is inserted into the Heap"<<endl;
    }
    void print(){
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void Heapify(int index){

        int largest = index;
        int left = 2*index + 1;
        int right = 2*index + 2;

        if(left<size && arr[left]>arr[largest]){
            largest = left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest = right;
        }
        if(largest != index){
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }

    }
    void Delete(){
        if(size == 0){
            cout<<"Heap is Underflow"<<endl;
            return;
        }
        cout<<arr[0]<<" is deleted from the Heap"<<endl;

        arr[0] = arr[size-1];
        size--;
        
        if(size == 0){
            return;
        }
        Heapify(0);
    }

};
int main(){
    MaxHeap heap(6);
    heap.insert(4);
    heap.insert(14);
    heap.insert(11);
    heap.Delete();
    heap.print();
    heap.insert(144);
    heap.insert(24);
    heap.insert(1);
    heap.insert(10);
    heap.print();
    heap.Delete();
    heap.Delete();
    heap.Delete();
    heap.Delete();
    heap.Delete();
    heap.Delete();
    heap.print();
    heap.Delete();


}