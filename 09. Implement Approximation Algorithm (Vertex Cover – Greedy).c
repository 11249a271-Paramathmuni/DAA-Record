Aim: To find a vertex cover of a graph using a greedy approximation algorithm.

Algorithm: VertexCover(graph, n)

Start
Initialize visited[0…n-1] ← false
For each vertex i from 0 to n-1 do:
  For each vertex j from i+1 to n-1 do:
   If graph[i][j] = 1 AND visited[i] = false AND visited[j] = false then:
    a. Mark visited[i] ← true
    b. Mark visited[j] ← true
    c. Output edge (i, j)
Stop

Program:

#include <stdio.h>

int main() {
    int n, i, j;
    int graph[10][10], visited[10] = {0};

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Vertex Cover:\n");
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (graph[i][j] && !visited[i] && !visited[j]) {
                visited[i] = visited[j] = 1;
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}

Sample Input:

Enter number of vertices: 4

Enter adjacency matrix:
0 1 1 0
1 0 1 1
1 1 0 1
0 1 1 0

Sample Output:

Vertex Cover:
0 1
2 3

Result: Thus, the vertex cover of the given graph is obtained using a greedy approximation algorithm.
