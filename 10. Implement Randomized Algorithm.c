Aim: To sort a list of elements using the Randomized Quick Sort algorithm.

Algorithm: RandomizedQuickSort(A, low, high)

Start
If low < high then
 a. pi ← RandomPartition(A, low, high)
 b. RandomizedQuickSort(A, low, pi - 1)
 c. RandomizedQuickSort(A, pi + 1, high)
Stop

Algorithm: RandomPartition(A, low, high)

Generate a random index r such that low ≤ r ≤ high
Swap A[r] and A[high]
Return Partition(A, low, high)

Algorithm: Partition(A, low, high)

pivot ← A[high]
i ← low - 1
For j ← low to high - 1 do
  If A[j] ≤ pivot then
   a. i ← i + 1
   b. Swap A[i] and A[j]
Swap A[i + 1] and A[high]
Return i + 1

Program:

#include <stdio.h>
#include <stdlib.h>

int partition(int a[], int low, int high) {
    int pivot = a[high], i = low - 1, j, temp;

    for (j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            temp = a[i]; 
            a[i] = a[j]; 
            a[j] = temp;
        }
    }

    temp = a[i+1]; 
    a[i+1] = a[high]; 
    a[high] = temp;

    return i + 1;
}

int random_partition(int a[], int low, int high) {
    int r = low + rand() % (high - low + 1);

    int temp = a[r]; 
    a[r] = a[high]; 
    a[high] = temp;

    return partition(a, low, high);
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pi = random_partition(a, low, high);

        quicksort(a, low, pi - 1);
        quicksort(a, pi + 1, high);
    }
}

int main() {
    int n, i;
    int a[20];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, n-1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

Sample Input:

Enter number of elements: 5
Enter elements:
4 2 7 1 3

Sample Output:

Sorted array:
1 2 3 4 7

Result: Thus, the given list of elements is sorted successfully using the Randomized Quick Sort algorithm.
