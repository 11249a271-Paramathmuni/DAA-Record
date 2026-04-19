Aim: To search for a given element in an array using Linear Search (Recursion) and measure the execution time.

Algorithm: LINEAR_SEARCH(arr, begin, stop, key)

Start
If begin == stop then
  Print "Element not found" and return
If arr[begin] == key then
  Print "Element found at position begin+1" and return
Else
  Call LINEAR_SEARCH(arr, begin+1, stop, key)
Stop

Program:

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void ls(int a[], int begin, int stop, int search)
{
    if (begin == stop)
        printf("Element not found\n");
    else if (a[begin] == search)
        printf("Element found at position %d\n", begin + 1);
    else
        ls(a, begin + 1, stop, search);
}

int main()
{
    int a[10000], n = 10000, key, i;
    clock_t start, end;

    // Generate random elements
    for (i = 0; i < n; i++)
        a[i] = rand() % 1000;

    key = rand() % 1000;

    printf("Searching for element: %d\n", key);

    start = clock();

    ls(a, 0, n, key);

    end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Total time taken: %lf seconds\n", time_taken);

    return 0;
}

Sample Output:

Searching for element: 457
Element found at position 234
Total time taken: 0.000001 seconds

Result: Thus, the element is searched successfully using Linear Search (Recursion), and execution time is calculated.
