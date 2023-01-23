#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) P->info
#define next(P) P->next
#define firstEdge(A) A->firstEdge
#define NIL NULL

typedef char infotype;
typedef struct Node *adrNode;
typedef struct Edge *adrEdge;

struct Node{
    adrNode next;
    adrEdge firstEdge;
    infotype info;
};

struct Edge{
    infotype info;
    adrEdge next;
};

adrNode newNode_1303213026(char x);
void addNode_1303213026(adrNode &G, adrNode p);
adrNode findNode_1303213026(adrNode G, char x);
void addEdge_1303213026(adrNode &G, char x, char y);
bool isConnected_1303213026(adrNode G, char x, char y);
void printGraph_1303213026(adrNode G);
#endif // GRAPH_H_INCLUDED
