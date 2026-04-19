Aim: To generate all permutations of a given set of elements using recursion.

Algorithm: PERM(arr, start, stop)

Start
If start == stop then
  Print the array elements
Else
  For i ← start to stop-1 do:
   a. Swap arr[i] and arr[start]
   b. Call PERM(arr, start+1, stop)
   c. Swap back arr[i] and arr[start] (Backtracking)
Stop

Program:

#include <stdio.h>

void perm(int arr[], int start, int stop)
{
    int i, temp;

    if(start == stop)
    {
        for(i = 0; i < stop; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    else
    {
        for(i = start; i < stop; i++)
        {
            // Swap
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;

            perm(arr, start + 1, stop);

            // Backtrack (swap again)
            temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
        }
    }
}

int main()
{
    int n, i, a[10];

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    perm(a, 0, n);

    return 0;
}

Sample Input:

Enter total number of elements: 3
Enter elements:
1 2 3

Sample Output:

1 2 3
1 3 2
2 1 3
2 3 1
3 2 1
3 1 2

Result: Thus, all permutations of the given elements are generated successfully using recursion.
