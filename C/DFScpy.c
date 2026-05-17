/*C program to demostrate DFS and BFS Traversal*/
#include <stdio.h>

int visited[20];
int graph[20][20];
int n;

void DFS(int v) {
    visited[v] = 1;
    printf("%d ", v);

    for (int w = 0; w < n; w++) {
        if (graph[v][w] == 1 && !visited[w]) {
            DFS(w);
        }
    }
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    for (int i = 0; i < n; i++) visited[i] = 0;

    int root;
    printf("Enter starting vertex: ");
    scanf("%d", &root);

    printf("DFS Traversal: ");
    DFS(root);

    return 0;
}
