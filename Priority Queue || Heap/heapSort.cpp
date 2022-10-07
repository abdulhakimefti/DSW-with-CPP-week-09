#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int array[], int n, int i)
{
    int largest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
    if (leftChild < n && array[leftChild] > array[largest])
    {
        largest = leftChild;
    }
    if (rightChild < n && array[rightChild] > array[largest])
    {
        largest = rightChild;
    }
    if (largest != i)
    {
        swap(array[i], array[largest]);
        heapify(array, n, largest);
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void heapsort(int array[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        swap(array[0], array[i]);
        heapify(array, i, 0);
    }
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Print Before Heapify: " << endl;
    printArray(array, n);
    // heapify
    int nonLeafStart = (n / 2) - 1;
    for (int i = nonLeafStart; i >= 0; i--)
    {
        heapify(array, n, i);
    }
    cout << "Print after Heapify: " << endl;
    printArray(array, n);

    cout << "Print after HeapSort: " << endl;
    heapsort(array, n);
    printArray(array, n);
    return 0;
}

/*
9
2 10 1 5 4 8 3 8 7
*/