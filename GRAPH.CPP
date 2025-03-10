// NAME OF ALLAH
#include<bits\stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


#define MAX_VERTICES 100

void addDirectedEdge(int graph[MAX_VERTICES][MAX_VERTICES], int start, int end, int vertices) {
    if (start < 0 || start >= vertices || end < 0 || end >= vertices) {
        printf("Invalid vertices.\n");
        return;
    }

    graph[start][end] = 1;
}

void displayGraph(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int vertices, edges;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    if (vertices <= 0 || vertices > MAX_VERTICES) {
        printf("Invalid number of vertices. Exiting...\n");
        return 1;
    }

    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    if (edges < 0 || edges > vertices * (vertices - 1)) {
        printf("Invalid number of edges. Exiting...\n");
        return 1;
    }

    for (int i = 0; i < edges; i++) {
        int start, end;
        printf("Enter edge %d (start end): ", i + 1);
        scanf("%d %d", &start, &end);

        if (start < 0 || start >= vertices || end < 0 || end >= vertices) {
            printf("Invalid vertices. Try again.\n");
            i--;
            continue;
        }

        addDirectedEdge(graph, start, end, vertices);
    }

    displayGraph(graph, vertices);

    return 0;
}


/*nter edge 3 (start end): 2 3
Enter edge 4 (start end): 3 4
Enter edge 5 (start end): 4 0
Enter edge 6 (start end): 2 4
Adjacency Matrix:
0 1 0 0 0//
0 0 1 0 0
0 0 0 1 1
0 0 0 0 1
1 0 0 0 0*/
