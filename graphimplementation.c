/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


struct AdjListNode
{
  int dest;
  struct AdjListNode *next;
};


struct AdjList
{
  struct AdjListNode *head;
};


struct Graph
{
  int v;
  struct AdjList *array;
};


struct Graph *createGraph (int v)
{
  struct Graph *graph = (struct Graph *) malloc (sizeof (struct Graph));
  graph->v = v;
  graph->array = (struct AdjList *) malloc (v * sizeof (struct AdjList));

  for (int i = 0; i < v; i++)
    {
      graph->array[i].head == NULL;
     
    }

  return graph;
 }

struct Graph *insertVertex (struct Graph *graph, int s, int d)
{

 struct AdjListNode* arrayhead = graph->array[s].head;
     struct AdjListNode *node = (struct AdjListNode *) malloc (sizeof (struct AdjListNode));
     node->dest=d;
    node->next=NULL;

  if (arrayhead == NULL)
    {
        
    graph->array[s].head=node;
        
    }
    else{
         struct AdjListNode *tempnode=arrayhead;
         while(tempnode->next!=NULL){
             tempnode=tempnode->next;
         }
         tempnode->next=node;
         
         
    }
    
    return graph;

}

void print(struct Graph* graph){
    for(int v=0;v<graph->v;v++){
         struct AdjListNode* node = graph->array[v].head;
         printf("%d",v);
         printf("%s","->");
         while(node!=NULL){
             printf("%d",node->dest);
               printf("%s","->");
               node=node->next;
             
         }
         printf("\n");
    }
}

int main (){
  //create a graph
  struct Graph *graph = createGraph (5);

  //insert Node
  graph=insertVertex(graph,0,1);
    graph=insertVertex(graph,0,2);
    graph=insertVertex(graph,0,3);
    graph=insertVertex(graph,1,1);
    graph=insertVertex(graph,1,2);
    graph=insertVertex(graph,2,1);
    graph=insertVertex(graph,2,2);
    graph=insertVertex(graph,3,1);
    
    print(graph);
    




  

}
