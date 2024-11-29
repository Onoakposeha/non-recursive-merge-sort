
void merge(double *A, int low, int mid, int high)
{
    int p1, p2; // pivots or pointers
    p1 = low; 
    p2 = mid + 1;

    double merged[high - low + 1];  // temporary array to hold the merged values
    int i = 0;                      // index for the temporary array (merged)
    while (p1 <= mid && p2 <= high) // while no indexes have been maxed
    {
        // pick smallest
        if (A[p1] <= A[p2])
        {
            merged[i] = A[p1];
            p1++;
        }
        else
        {
            merged[i] = A[p2];
            p2++;
        }
        i++; //increment the sorted list
    }

    // find the non-maxed index
    int k, l;
    if (p1 > mid)
    {
        k = p2;
        l = high;
    }
    else if(p2> high)
    {
        k = p1;
        l = mid;
    }

    //append the rest entries
    for (int c1 = k; c1 <= l; c1++)
    {
        merged[i] = A[c1];
        i++;
    }

    //copy sorted values back to the initial array
    for (int i = 0, j = low; j <= high; i++, j++)
    {
        A[j] = merged[i];
    }
}
