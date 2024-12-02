# Non-recursive Merge Sort
This project implements the Merge Sort algorithm in C++, using an iterative approach. The implementation is divided into distinct functions for merging and sorting.

## Project Overview
The project consists of three main components:

1. `mergeSort.cpp`: Contains the mergeSort function, which performs the iterative merge sort.

2. `merge.cpp`: Contains the merge function, which is used to merge two sorted subarrays.

3. `test-program.cpp`: A test program that demonstrates the usage of the mergeSort function.

## File Descriptions
### mergeSort.cpp
This file defines the `mergeSort` function, which iteratively sorts an array using the merge sort algorithm. The sorting process involves:
* **Iterative Sorting:**
The array is sorted from the bottom up, doubling the size of the subarrays to be merged in each iteration.

* **Merge Function:** The `merge` function is used to merge the subarrays during each iteration.

### merge.cpp
This file defines the `merge` function, which merges two sorted subarrays into a single sorted array. Key features of the merge function include:
* **Pivots:**
Utilizes two pivots (`p1` and `p2`) to traverse the subarrays.

* **Temporary Array:** Merges elements into a temporary array and then copies them back to the original array.
* **Handling Remaining Elements:** Ensures any remaining elements in the subarrays are correctly appended to the merged array.

### test-program.cpp
The test program in this file:
* **Initializes** an array of doubles.
* **Calls** the `mergeSort` function to sort the array.
* **Prints** the sorted array to demonstrate the functionality of the merge sort implementation.

## How to Run
Compile and run the `test-program.cpp` file, you can also #include the `mergeSort.cpp` file to use it in your code
