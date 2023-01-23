#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(P) ((P).first)
#define NIL NULL

struct jadwalPenerbangan{
    string Kode,Jenis,Tanggal,Waktu,Asal,Tujuan;
    int Kapasitas;
};

typedef struct jadwalPenerbangan infotype;
typedef struct elemenJadwal *adr_jadwalP;

struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal{
    adr_jadwalP first;
};

void createListJadwal_1303213026(ListJadwal &L);
adr_jadwalP createElemenJadwal_1303213026(infotype x);
void insertLastJ_1303213026(ListJadwal &L, adr_jadwalP P);
void showJadwal_1303213026(ListJadwal L);
void DeleteFirst_1303213026(ListJadwal &L, adr_jadwalP &P);
bool SearchJ_1303213026(ListJadwal L, string dari, string ke, string tanggal);
#endif // FLIGHT_H_INCLUDED
