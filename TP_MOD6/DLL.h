#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include<iostream>
#include <string>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define NIL NULL

typedef struct rumah infotype;
typedef struct element *address;

struct rumah{
    string tipe_rumah, harga_unit, luas_bangunan;
    int luas_tanah, ID_faktur;
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
address createNewElement_1303213026(string tipe, string luasBangunan,int luasTanah, int faktur, string harga);
void insertFirst_1303213026(List &L, address P);
void showAllData_1303213026(List L);
int jumlahData_1303213026(List L);
int selectMenu_1303213026();
#endif // DLL_H_INCLUDED
