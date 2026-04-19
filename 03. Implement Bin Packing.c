Aim: To write a C program to implement the First Fit Bin Packing Algorithm and display the remaining space in each bin.

Algorithm: FIRST_FIT_BIN_PACKING

Read number of items n
Read bin capacity CAP
Initialize all bins with capacity CAP
For each item i = 1 to n do
  For each bin j = 1 to n do
    If bin[j] ≥ item[i] then
      bin[j] ← bin[j] − item[i]
      Break
    End If
  End For
 End For
Display remaining space in bins
End

Program:

#include <stdio.h> 

int main() { 
    int n, i, j; 
    float bin[10], item[10], cap; 
    printf("Enter number of items: "); 
    scanf("%d", &n); 
    printf("Enter bin capacity: "); 
    scanf("%f", &cap); 

    for (i = 0; i < n; i++) { 
        printf("Enter size of item %d: ", i+1); 
        scanf("%f", &item[i]); 
        bin[i] = cap; 
    } 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < n; j++) { 
            if (bin[j] >= item[i]) { 
                bin[j] -= item[i]; 
                break; 
            } 
        } 
    } 
    printf("Remaining space in bins:\n"); 
    for (i = 0; i < n; i++) 
        printf("Bin %d: %.2f\n", i+1, bin[i]); 

    return 0; 
}

Input:

Enter number of items: 3
Enter bin capacity: 14
Enter size of item 1: 4
Enter size of item 2: 3
Enter size of item 3: 5

Output:

Remaining space in bins:
Bin 1: 2.00
Bin 2: 14.00
Bin 3: 14.00

Result: Thus, the program is executed successfully, and all items are placed using the First Fit Bin Packing Algorithm, leaving the remaining capacities as shown above.
