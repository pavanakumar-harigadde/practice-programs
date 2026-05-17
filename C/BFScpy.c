#include <stdio.h>

int visited[20];
int graph[20][20];
int queue[20];
int front = -1, rear = -1;
int n;

// enqueue
void enqueue(int x) {
    if (rear == 19) return;
    if (front == -1) front = 0;
    queue[++rear] = x;
}

// dequeue
int dequeue() {
    if (front == -1 || front > rear) return -1;
    return queue[front++];
}

void BFS(int start) {
    for (int i = 0; i < n; i++) visited[i] = 0;

    enqueue(start);
    visited[start] = 1;

    while (front <= rear) {
        int v = dequeue();
        printf("%d ", v);

        for (int i = 0; i < n; i++) {
            if (graph[v][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
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

    int start;
    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("BFS Traversal: ");
    BFS(start);

    return 0;
}
