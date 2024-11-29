#include <math.h>
#include "merge.cpp"

void merge(double*, int, int, int);

void mergeSort(double *A, int size)
{
    //this function performs merge sort by iteratively sorting from bottom upwards
    //while doubling the size of the 
    int width = 2, maxIndex = size - 1;
    int iterations = log2(size) + 1;
    for (int i = 1; i <= iterations; i++)
    {
        int high = 0;
        for (int low = 0; low <= maxIndex; low += width)
        {
            high = low + width - 1;
            if (high > maxIndex)
                high = maxIndex;
            if (high - low + 1 > width / 2)
                merge(A, low, low + width / 2 - 1, high);
        }
        width *= 2;
    }
}