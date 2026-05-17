/*C program to demostrate DFS and BFS Traversal*/
#include <stdio.h>
#define MAX 20

int visited[MAX];
int graph[MAX][MAX];
int n;
int queue[MAX]; // For BFS we use queue
int front = -1, rear = -1;


/*DFS function definition*/
void DFS(int v) {
    visited[v] = 1;
    printf("%d ", v);

    for (int w = 0; w < n; w++) {
        if (graph[v][w] == 1 && !visited[w]) {
            DFS(w);
        }
    }
}

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

//BFS Traversal definition
void BFS(int root) {
    for (int i = 0; i < n; i++){
        visited[i] = 0;
    }

    enqueue(root);
    visited[root] = 1;

    while (front <= rear) {
        int v = dequeue();
        printf("%d ", v);

        for (int w = 0; w < n; w++) {
            if (graph[v][w] == 1 && !visited[w]) {
                enqueue(w);
                visited[w] = 1;
            }
        }
    }
}

/*Main function*/
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
    DFS(root);//Calling DFS
    printf("\nBFS Traversal: ");
    BFS(root);// Calling BFS
    return 0;
}

/*End of the program*/