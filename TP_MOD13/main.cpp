#include "graph.h"

using namespace std;

int main()
{
    adrNode G,P;
    /**ADD Node*/
    G = newNode_1303213026('A');
    P = newNode_1303213026('B');
    addNode_1303213026(G,P);
    P = newNode_1303213026('C');
    addNode_1303213026(G,P);
    P = newNode_1303213026('D');
    addNode_1303213026(G,P);

    /**ADD Edge*/
    addEdge_1303213026(G,'A','B');
    addEdge_1303213026(G,'A','D');
    addEdge_1303213026(G,'A','C');
    addEdge_1303213026(G,'B','D');
    addEdge_1303213026(G,'B','A');
    addEdge_1303213026(G,'C','A');
    addEdge_1303213026(G,'D','B');
    addEdge_1303213026(G,'D','A');
    printGraph_1303213026(G);
    return 0;
}
