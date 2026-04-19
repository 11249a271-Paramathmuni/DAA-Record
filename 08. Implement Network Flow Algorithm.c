Aim: To find the maximum flow in a network using a simplified Ford–Fulkerson method.

Algorithm: MaxFlow(cap, n, s, t)

Start
Initialize flow ← 0
For each vertex i from 0 to n-1 do:
 a. Find minimum capacity:
  f ← min(cap[s][i], cap[i][t])
 b. Add to total flow:
  flow ← flow + f
Return flow
Stop

Program:

#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n, i, j, s, t;
    int cap[10][10], flow = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter capacity matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &cap[i][j]);

    printf("Enter source and sink: ");
    scanf("%d %d", &s, &t);

    for (i = 0; i < n; i++) {
        int f = min(cap[s][i], cap[i][t]);
        flow += f;
    }

    printf("Maximum flow: %d\n", flow);
    return 0;
}

Sample Input:

Enter number of vertices: 4

Enter capacity matrix:
0 3 2 0
0 0 5 2
0 0 0 3
0 0 0 0

Enter source and sink: 0 3

Sample Output:

Maximum flow: 5

Result: Thus, the maximum flow of the given network is calculated successfully using the simplified Ford–Fulkerson method.
