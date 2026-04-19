Aim: To write a C program to solve the Travelling Salesman Problem (TSP) using Branch and Bound (simplified recursion) and find the minimum tour cost.

Algorithm: TSP(city)

Mark current city as visited
Initialize min_cost ← ∞
For each city i = 1 to n do
  If city i is not visited AND cost[city][i] ≠ 0 then
    temp ← cost[city][i] + TSP(i)
    min_cost ← minimum(min_cost, temp)
  End If
End For
Mark current city as unvisited
If min_cost = ∞ then
  Return cost[city][0]
Else
  Return min_cost
End

Program:

#include <stdio.h> 
#include <limits.h> 

int n, cost[10][10], visited[10]; 

int min(int a, int b) { 
    return (a < b) ? a : b; 
} 

int tsp(int city) { 
    int i, min_cost = INT_MAX, temp; 
    visited[city] = 1; 
    for (i = 0; i < n; i++) { 
        if (!visited[i] && cost[city][i] != 0) { 
            temp = cost[city][i] + tsp(i); 
            min_cost = min(min_cost, temp); 
        } 
    } 

    visited[city] = 0; 
    return (min_cost == INT_MAX) ? cost[city][0] : min_cost; 
} 

int main() { 
    int i, j; 
    printf("Enter number of cities: "); 
    scanf("%d", &n); 

    printf("Enter cost matrix:\n"); 
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) 
            scanf("%d", &cost[i][j]); 

    printf("Minimum tour cost: %d\n", tsp(0)); 
    return 0; 
}

Sample Input:

Enter number of cities: 4
Enter cost matrix:
0 10 15 20
10 0 35 25
15 35 0 30
20 25 30 0

Sample Output:

Minimum tour cost: 80

Result: Thus, the program to solve the Travelling Salesman Problem using Branch and Bound (recursion) is executed successfully and the minimum tour cost is obtained.
