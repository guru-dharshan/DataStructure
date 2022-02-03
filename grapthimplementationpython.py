from collections import defaultdict
def addEdge(s,d):
    graph[s].append(d)
    
def printgraph():
    for i in graph:
        print(i,end=" ")
        print("->",end=" ")
        print(graph[i])
        
graph = defaultdict(list)
addEdge(0, 1)
addEdge(0, 2)
addEdge(1, 2)
addEdge(2, 0)
addEdge(2, 3)
addEdge(3, 3)
printgraph()