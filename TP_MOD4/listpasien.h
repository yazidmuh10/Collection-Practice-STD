#ifndef LISTPASIEN_H_INCLUDED
#define LISTPASIEN_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nill NULL

struct pasien{
    string nama;
    string nik;
    int umur;
    string keluhan;
};

typedef pasien infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct List{
    address first;
};

void createList(List &L);
infotype newPasien(string nama, string nik,int umur,string keluhan);
address newElement(infotype dataBaru);
void insertFirst(List &L, address p);
void insertLast(List &L, address p);
void deleteFirst(List &L);
void deleteLast(List &L);
void printList(List L);

#endif // LISTPASIEN_H_INCLUDED
