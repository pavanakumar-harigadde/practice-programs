/*C Program to demonstrate Depth First Search Algorithm to traverse a graph*/

#include<stdio.h>
#define MAX 25

int Graph[MAX][MAX];
int visited[MAX];
int v, w;
int V[] = {5,4,6,8,4};
int n = sizeof(V);
int count=0;

/*Marking all nodes with zero */ 
for(v=0;v<n;v++){
    visited[v] = 0;
}



void DFS(v){
    for(v=0;v<n;v++){
        if(visited[v]==0){
            dfs(v);
            
        }
    }
}

void dfs(v){
    count=count+1;
    visited[v]=count;
    for(Graph[v][w] == 1 && visited[w]==0){
        dfs(w);
    }

}

int main(void){
    printf("Enter the adjacency matrix")
}