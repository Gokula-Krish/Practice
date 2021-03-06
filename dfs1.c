#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 7
struct Vertex
{
   char label;
   bool visited;
};
//stack variables
int stack[MAX];
int top = -1;
//graph variables
//array of vertices
struct Vertex* lstVertices[MAX];
//adjacency matrix
int adjMatrix[MAX][MAX];
//vertex count
int vertexCount = 0;
//stack functions
void push(int item) {
   stack[++top] = item;
}
int pop() {
   return stack[top--];
}
int peek() {
   return stack[top];
}
bool isStackEmpty() {
   return top == -1;
}
//graph functions
//add vertex to the vertex list
void addVertex(char label) {
   struct Vertex* vertex = (struct Vertex*) malloc(sizeof(struct Vertex));
   vertex->label = label;
   vertex->visited = false;
   lstVertices[vertexCount++] = vertex;
}
//add edge to edge array
void addEdge(int start,int end)
{
   adjMatrix[start][end] = 1;
}
//display the vertex
void displayVertex(int vertexIndex) {
   printf("%c ",lstVertices[vertexIndex]->label);
}
//get the adjacent unvisited vertex
int getAdjUnvisitedVertex(int vertexIndex) {
   int i;

   for(i = 0; i < vertexCount; i++) {
      if(adjMatrix[vertexIndex][i] == 1 && lstVertices[i]->visited == false) {
         return i;
      }
   }
   return -1;
}
void depthFirstSearch() {
   int i;
   //mark first node as visited
   lstVertices[0]->visited = true;
   //display the vertex
   displayVertex(0);
   //push vertex index in stack
   push(0);
   while(!isStackEmpty()) {
      //get the unvisited vertex of vertex which is at top of the stack
      int unvisitedVertex = getAdjUnvisitedVertex(peek());
      //no adjacent vertex found
      if(unvisitedVertex == -1) {
         pop();
      }
      else
        {
         lstVertices[unvisitedVertex]->visited = true;
         displayVertex(unvisitedVertex);
         push(unvisitedVertex);
      }
   }
   //stack is empty, search is complete, reset the visited flag
   for(i = 0;i < vertexCount;i++) {
      lstVertices[i]->visited = false;
   }
}

int main()
{
   int i, j;

   for(i = 0; i < MAX; i++)    // set adjacency
        {
      for(j = 0; j < MAX; j++) // matrix to 0
         adjMatrix[i][j] = 0;
   }

   addVertex('S');   // 0
   addVertex('A');   // 1
   addVertex('B');   // 2
   addVertex('C');   // 3
   addVertex('D');   // 4
   addVertex('E');   // 5
   addVertex('F');   // 6
   addEdge(0, 1);
   addEdge(0, 3);
   addEdge(1, 0);
   addEdge(1, 2);
   addEdge(1, 3);
   addEdge(1, 5);
   addEdge(1, 6);
    addEdge(2, 1);
    addEdge(2, 3);
    addEdge(2, 4);
    addEdge(2, 5);
     addEdge(3, 0);
     addEdge(3, 1);
     addEdge(3, 2);
     addEdge(3, 4);
     addEdge(4, 2);
     addEdge(4, 3);
     addEdge(4, 6);
     addEdge(5, 1);
     addEdge(5, 2);
     addEdge(6, 1);
     addEdge(6, 4);

   printf("19EUEC045-GOKULA KRISHNAN E\nDepth First Search: ");
   depthFirstSearch();

   return 0;
}
