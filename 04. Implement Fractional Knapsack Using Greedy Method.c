Aim: To write a C program to implement the Fractional Knapsack Problem using Greedy Method and find the maximum profit.

Algorithm: FRACTIONAL_KNAPSACK

Read number of items n
For i ← 1 to n do
  Read weight[i], profit[i]
  ratio[i] ← profit[i] / weight[i]
End For
Sort items in decreasing order of ratio
Read knapsack capacity CAP
Initialize profit ← 0
For i ← 1 to n do
  If weight[i] ≤ CAP then
    profit ← profit + profit[i]
    CAP ← CAP − weight[i]
  Else
    profit ← profit + ratio[i] × CAP
    Break
  End If
End For
Print profit
End

Program:

#include <stdio.h> 

int main() { 
    int n, i, j; 
    float w[10], p[10], ratio[10], temp, capacity, profit = 0; 

    printf("Enter number of items: "); 
    scanf("%d", &n); 

    for (i = 0; i < n; i++) { 
        printf("Enter weight and profit of item %d: ", i+1); 
        scanf("%f %f", &w[i], &p[i]); 
        ratio[i] = p[i] / w[i]; 
    } 
    printf("Enter knapsack capacity: "); 
    scanf("%f", &capacity); 

    for (i = 0; i < n-1; i++) { 
        for (j = i+1; j < n; j++) { 
            if (ratio[i] < ratio[j]) { 
                temp = ratio[i]; ratio[i] = ratio[j]; ratio[j] = temp; 
                temp = w[i]; w[i] = w[j]; w[j] = temp; 
                temp = p[i]; p[i] = p[j]; p[j] = temp; 
            } 
        } 
    } 

    for (i = 0; i < n; i++) { 
        if (w[i] <= capacity) { 
            profit += p[i]; 
            capacity -= w[i]; 
        } else { 
            profit += ratio[i] * capacity; 
            break; 
        } 
    } 

    printf("Maximum profit = %.2f\n", profit); 
    return 0; 
}

Sample Input: 

Enter number of items: 3
Enter weight and profit of item 1: 10 60
Enter weight and profit of item 2: 20 100
Enter weight and profit of item 3: 30 120
Enter knapsack capacity: 50

Sample Output: 

Maximum profit = 240.00

Result: Thus, the program to solve the Fractional Knapsack Problem using Greedy Method is executed successfully and the maximum profit is obtained.
