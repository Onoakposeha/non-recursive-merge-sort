#include <iostream>
#include "mergeSort.cpp"

using namespace std;

void mergeSort(double*,int);

//program to test the merge sort function
int main()
{
    double myList[] = {1, 7, 10, 11, 2, 5, 8, 13, 19, 23, 0.3, -13, -5, 7};
    mergeSort(myList, 14);

    for (int i = 0; i < 14; i++)
    {
        cout << myList[i] << endl;
    }
    return 0;
}

