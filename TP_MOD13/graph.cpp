#include "graph.h"

adrNode newNode_1303213026(char x){
    adrNode P = new Node;
    info(P) = x;
    next(P) = NIL;
    firstEdge(P) = NIL;
    return P;
}
void addNode_1303213026(adrNode &G, adrNode p){
    adrNode C;
    if(G == NIL){
        G = p;
        next(G) = NIL;
    }else{
        C = G;
        while(next(C) != NIL){
            C = next(C);
        }
        next(C) = p;
    }
}
adrNode findNode_1303213026(adrNode G, char x){
    adrNode P;
    P = G;
    while(P != NIL && info(P) != x){
        P = next(P);
    }
    if(P == NIL){
        return P;
    }else{
        return P;
    }
}
void addEdge_1303213026(adrNode &G, char x, char y){
    adrNode P,Q;
    adrEdge e1,e2;
    if(G == NIL){
        cout<<"List Masih Kosong"<<endl;
    }else{
        P = findNode_1303213026(G,x);
        Q = findNode_1303213026(G,y);
        if((Q != NIL && P != NIL) && !isConnected_1303213026(G,x,y)){
            e1 = new Edge;
            e2 = new Edge;

            info(e1) = y;
            next(e1) = NIL;

            info(e2) = x;
            next(e2) = NIL;

            next(e1) = firstEdge(P);
            firstEdge(P) = e1;

            next(e2) = firstEdge(Q);
            firstEdge(Q) = e2;
        }
    }
}
bool isConnected_1303213026(adrNode G, char x, char y){
    bool connet = false;
    adrNode a,b;
    adrEdge P;
    a = findNode_1303213026(G,x);
    b = findNode_1303213026(G,y);
    if (a != NIL && b != NIL){
        P = firstEdge(a);
        while( P != NIL && !connet){
            connet = info(P) == y;
            P = next(P);
        }
    }
    return connet;
}

void printGraph_1303213026(adrNode G){
    adrNode P;
    adrEdge Q;
    if(G == NIL){
        cout<<"Graph Kosong"<<endl;
    }else{
        P = G;
        cout<<"================================================================================="<<endl;
        while(P != NIL){
            cout<<"Node "<<info(P)<<" : ";
            Q = firstEdge(P);
            while(Q != NIL){
                cout<<" - "<<info(Q);
                Q = next(Q);
            }
            P = next(P);
            cout<<endl;
        }
        cout<<"================================================================================="<<endl;
    }
}










