#include "CSLL.h"

void create_List_1303213026(ListLagu &L){
    first(L) = NIL;
}

void create_Element_1303213026(infotype x, address &P){
    P = new element;
    info(P).Artis = x.Artis;
    info(P).Judul = x.Judul;
    info(P).Genre = x.Genre;
    info(P).playtime = x.playtime;
    next(P) = NIL;
}

void insertLast_1303213026(ListLagu &L, address pLagu){
    address Q;
    Q = first(L);
    if(first(L) == NIL){
        first(L) = pLagu;
        next(pLagu) = first(L);
    }else{
        while(next(Q) != first(L)){
            Q = next(Q);
        }
        next(Q) = pLagu;
        next(pLagu) = first(L);
    }
}

void showAll_1303213026(ListLagu L){
    address P;
    P = first(L);
    while(next(P) != first(L)){
        cout << "Artis  : " << info(P).Artis << endl;
        cout << "Judul  : " << info(P).Judul << endl;
        cout << "Genre  : " << info(P).Genre << endl;
        cout << "Playtime: " << info(P).playtime << endl;
        cout <<  endl;
        P = next(P);
    }
        cout << "Artis  : " << info(P).Artis << endl;
        cout << "Judul  : " << info(P).Judul << endl;
        cout << "Genre  : " << info(P).Genre << endl;
        cout << "Playtime: " << info(P).playtime << endl;
        cout <<  endl;
}

void deleteFirst_1303213026(ListLagu &L, address &pLagu){
    address Q;
    if(first(L) == NIL){
        cout << "List Lagu Kosong" << endl;
    }else if(next(first(L)) == NIL){
        pLagu = first(L);
        first(L) == NIL;
    }else{
        Q = first(L);
        while(next(Q) != first(L)){
            Q = next(Q);
        }
        pLagu = first(L);
        first(L) = next(pLagu);
        next(pLagu) = NIL;
        next(Q) = first(L);
    }

}

void insertFirst(ListLagu &L,address pLagu){
    if(first(L) == NIL){
        pLagu = first(L);
        next(pLagu) = first(L);
    }else{

    }
}
