Aim: To find the shortest path from a given source vertex to all other vertices using Dijkstra’s Algorithm.

Algorithm: Dijkstra

Start
Initialize visited[n] = {0}
For each vertex i
  Set dist[i] = cost[src][i]
Mark source vertex as visited
  visited[src] = 1
Repeat for n-1 times:
 a. Find vertex u such that:
  - visited[u] = 0
  - dist[u] is minimum
 b. Mark u as visited
 c. Update distances:
  For each vertex j:
  If visited[j] = 0 and
  dist[u] + cost[u][j] < dist[j]
  Then update dist[j]
Print shortest distances
Stop

Program:

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, j, src;
    int cost[10][10], dist[10], visited[10] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);

    printf("Enter source vertex: ");
    scanf("%d", &src);

    for (i = 0; i < n; i++)
        dist[i] = cost[src][i];

    visited[src] = 1;

    for (i = 1; i < n; i++) {
        int min = INT_MAX, u;

        for (j = 0; j < n; j++) {
            if (!visited[j] && dist[j] < min) {
                min = dist[j];
                u = j;
            }
        }

        visited[u] = 1;

        for (j = 0; j < n; j++) {
            if (!visited[j] && dist[u] + cost[u][j] < dist[j])
                dist[j] = dist[u] + cost[u][j];
        }
    }

    printf("Shortest distances:\n");
    for (i = 0; i < n; i++)
        printf("%d -> %d = %d\n", src, i, dist[i]);

    return 0;
}

Sample Input:

Enter number of vertices: 4

Enter adjacency matrix:
0 2 5 1
3 0 7 4
3 8 0 2
4 2 1 0

Enter source vertex: 0

Sample Output:

Shortest distances:
0 -> 0 = 0
0 -> 1 = 2
0 -> 2 = 2
0 -> 3 = 1

Result: Thus, the shortest path from the source vertex to all other vertices was successfully found using Dijkstra’s Algorithm.
