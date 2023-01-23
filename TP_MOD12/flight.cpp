#include "flight.h"

void createListJadwal_1303213026(ListJadwal &L){
    first(L) = NIL;
}
adr_jadwalP createElemenJadwal_1303213026(infotype x){
    adr_jadwalP P = new elemenJadwal;
    info(P).Kode = x.Kode;
    info(P).Jenis = x.Jenis;
    info(P).Tanggal = x.Tanggal;
    info(P).Waktu =x.Waktu;
    info(P).Asal = x.Asal;
    info(P).Tujuan = x.Tujuan;
    info(P).Kapasitas = x.Kapasitas;
    next(P) = NIL;
    return P;
}
void insertLastJ_1303213026(ListJadwal &L, adr_jadwalP P){
    adr_jadwalP Q;
    if(first(L) == NIL){
        next(P) = first(L);
        first(L) = P;
    }else{
        Q = first(L);
        while(next(Q) != NIL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}
void showJadwal_1303213026(ListJadwal L){
    if(first(L) == NIL){
        cout << "List Masih Kosong" << endl;
    }else{
        adr_jadwalP P = first(L);
        while(P != NIL){
            cout << info(P).Kode << " " << info(P).Jenis << info(P).Tanggal << " " << info(P).Waktu << " ";
            cout <<  info(P).Asal << " " << info(P).Tujuan << " " <<  info(P).Kapasitas << endl;
            P = next(P);
        }
        cout << endl;
    }
}
void DeleteFirst_1303213026(ListJadwal &L, adr_jadwalP &P){
    if(first(L) == NIL){
        P = NIL;
        cout << "list kosong" << endl;
    }else if(next(first(L)) == NIL){
        P = first(L);
        first(L) = NIL;
    }else{
        P = first(L);
        first(L) = next(P);
        next(P) = NIL;
    }
}
bool SearchJ_1303213026(ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP P = first(L);
    while(P != NIL && info(P).Asal != dari && info(P).Tujuan != ke && info(P).Tanggal != tanggal){
        P = next(P);
    }
    if(P == NIL){
        return false;
    }else{
        return true;
    }
}
