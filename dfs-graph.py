from collections import defaultdict
def addEdge(s,d):
    graph[s].append(d)
    
def printgraph():
    for i in graph:
        print(i,end=" ")
        print("->",end=" ")
        print(graph[i])
        
def bfscheck(v):
    visited.add(v)
    print(v,end=" ")
    print("-> ",end="")
    for i in graph[v]:
        if i not in visited:
            bfscheck(i)
def bfs():
    bfscheck(0)
    
    
graph = defaultdict(list)
addEdge(0, 1)
addEdge(0, 2)
addEdge(1, 2)
addEdge(2, 0)
addEdge(2, 3)
addEdge(3, 4)
visited=set()
bfs()


