#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include<iostream>
#include <string>

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define NIL NULL

using namespace std;

typedef struct nasabah infotype;
typedef struct element *address;

struct nasabah{
    string nama,no_telpon, tipe_barang;
    int premi, value_barang;
};

struct element {
    infotype info;
    address next;
    address prev;
};

struct List{
    address first;
    address last;
};

void createList_1303213026(List &L);
void createNewElement_1303213026(string nama, string telpon, string jenis_barang,int premi, int nilai_barang, address &P);
void insertFirst_1303213026(List &L, address P);
void showAllData_1303213026(List L, address &P);
int selectMenu_1303213026();
void reverseList_1303213026(List L,address &P);
double average_1303213026(List L);
#endif // DLL_H_INCLUDED
