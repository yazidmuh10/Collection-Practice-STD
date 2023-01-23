#ifndef CSLL_H_INCLUDED
#define CSLL_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define NIL NULL

typedef struct{
    string Artis,Judul,Genre;
    int playtime;
}infotype;

typedef struct element *address;

struct element{
    infotype info;
    address next;
};

struct ListLagu{
    address first;
};

void create_List_1303213026(ListLagu &L);
void create_Element_1303213026(infotype x, address &P);
void showAll_1303213026(ListLagu L);
void insertLast_1303213026(ListLagu &L, address pLagu);
void deleteFirst_1303213026(ListLagu &L, address &pLagu);
void insertFirst(ListLagu &L,address pLagu);
#endif // CSLL_H_INCLUDED
