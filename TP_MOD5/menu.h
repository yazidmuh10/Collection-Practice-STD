#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include<iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL

typedef string infotype;
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createList_1303213026(List &L);
adr newElement_1303213026(infotype x);
void insertLast_1303213026(List &L, adr P);
void showAll_1303213026(List L);
adr longestName_1303213026(List L);
void showFirstKNameC_1303213026(List L, int k, char c);
int selectMenu_1303213026();

#endif // MENU_H_INCLUDED
