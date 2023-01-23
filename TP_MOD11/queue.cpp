#include "queue.h"

void createQueue_1303213026(playlistLagu &Q){
    head(Q) = NIL;
    tail(Q) = NIL;
}
address createElement_1303213026(string artis,string judul){
    address P = new elemen;
    info(P).Artis = artis;
    info(P).Judul = judul;
    next(P) = NIL;
}

void showSemuaLagu_1303213026(playlistLagu Q){
    address P;
    if(isEmpty_1303213026(Q)){
        cout << "Queue masih kosong" << endl;
    }else{
        P = head(Q);
        while(tail(Q) != NIL){
            cout << info(P).Artis << " : ";
            cout << info(P).Judul << endl;
            P = next(P);
            if(P == NIL){
                break;
            }
        }
    }
}

bool isEmpty_1303213026(playlistLagu Q){
    if(head(Q) == NIL && tail(Q) == NIL){
        return true;
    }else{
        return false;
    }
}
void enqueue_1303213026(playlistLagu &Q, address lagu){
     if(isEmpty_1303213026(Q)){
        head(Q) = lagu;
        tail(Q) = lagu;
    }else{
        next(tail(Q)) = lagu;
        tail(Q) = lagu;
    }
}
void dequeue_1303213026(playlistLagu &Q, address P){
    if(isEmpty_1303213026(Q)){
        cout << "Queue Kosong" << endl;
    }else{
        address P = head(Q);
        if(head(Q) == tail(Q)){
            head(Q) = NIL;
            tail(Q) = NIL;
        }else{
            head(Q) = next(P);
            next(P) = NIL;
        }
    }
}

