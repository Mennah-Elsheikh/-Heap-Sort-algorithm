HeapSort Implementation in C++

This repository contains an implementation of the HeapSort algorithm in C++ that sorts an array of integers in ascending order. HeapSort is a comparison-based sorting algorithm that utilizes a binary heap data structure. The key idea behind HeapSort is to first build a max-heap from the input data, then repeatedly swap the root of the heap (the maximum value) with the last item of the heap and reduce the heap size. After each swap, the heap property is restored using a procedure called "heapify."

Algorithm Overview
Heapify: This function ensures that a given subtree satisfies the heap property (the value of the parent node must be greater than or equal to the values of its children). It works recursively to maintain the heap property.

Building the Heap: The array is transformed into a max-heap. This is done by calling Heapify starting from the last non-leaf node, moving towards the root.

Sorting the Array: After building the heap, the root element (which is the maximum) is swapped with the last element of the heap, reducing the heap size by 1. This process continues until all elements are sorted.

How to Run
Clone or download the repository.
Compile the C++ code using any C++ compiler (e.g., g++, Visual Studio, etc.).
Run the program, which will display the original and sorted arrays.
Example Output
javascript
Copy code
Original Array: 9 4 3 8 10 2 5
Sorted Array: 2 3 4 5 8 9 10
Time Complexity
Best case: O(n log n)
Average case: O(n log n)
Worst case: O(n log n)
Space Complexity
O(1) (In-place sorting)
Notes
HeapSort is not a stable sort, meaning that the relative order of equal elements may not be preserved.
It is an in-place sorting algorithm, meaning it does not require extra space proportional to the input size.
Conclusion
HeapSort is an efficient, comparison-based sorting algorithm with a time complexity of O(n log n) and constant space complexity. It is widely used in applications where constant time for inserting and deleting the maximum or minimum element is required, such as in priority queues.
