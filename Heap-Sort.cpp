#include <iostream>
#include <vector>
using namespace std;

// Function to heapify a subtree rooted at index i
void Heapify(vector<int>& arr, int n, int i)
{
    int largest = i;       
    int left = 2 * i + 1;  
    int right = 2 * i + 2; 

    // Check if left child of root exists and is greater than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Check if right child of root exists and is greater than root
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root, swap and continue heapifying
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        Heapify(arr, n, largest);
    }
}

// Function to implement heap sort
void HeapSort(vector<int>& arr)
{
    int n = arr.size();

    // Build a maxheap
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(arr, n, i);

    // One by one extract elements from the heap
    for (int i = n - 1; i > 0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        Heapify(arr, i, 0);
    }
}

int main()
{
    vector<int> arr = {9, 4, 3, 8, 10, 2, 5};

    // Output the original array
    cout << "Original Array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    // Perform HeapSort
    HeapSort(arr);

    // Output the sorted array
    cout << "Sorted Array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}
