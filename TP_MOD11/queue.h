#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

#define info(Q) Q->info
#define next(Q) Q->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#define NIL NULL

struct infotype{
    string Artis;
    string Judul;
};

typedef struct elemen *address;

struct elemen{
    infotype info;
    address next;
};

struct playlistLagu{
    address head;
    address tail;
};

void createQueue_1303213026(playlistLagu &Q);
address createElement_1303213026(string artis,string judul);
void enqueue_1303213026(playlistLagu &Q, address lagu);
void dequeue_1303213026(playlistLagu &Q, address P);
bool isEmpty_1303213026(playlistLagu Q);
void showSemuaLagu_1303213026(playlistLagu Q);
#endif // QUEUE_H_INCLUDED
