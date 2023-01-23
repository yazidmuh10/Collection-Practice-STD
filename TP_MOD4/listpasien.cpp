#include "listpasien.h"

void createList(List &L){
    first(L) = nill;
}

infotype newPasien(string nama, string nik,int umur,string keluhan){
    infotype pas;
    pas.nama = nama;
    pas.nik = nik;
    pas.umur = umur;
    pas.keluhan = keluhan;
    return pas;
}

address newElement(infotype dataBaru){
    address P = new elmlist;
    info(P) = dataBaru;
    next(P) = nill;
    return P;
}

void insertFirst(List &L, address P){
    if(first(L) == nill){
        first(L) = P;
    }else{
        next(P) = first(L);
        first(L) = P;
    }
}

void deleteFirst(List &L){
    address p;
    if(first(L) == nill){
        p = nill;
        cout << "list kosongd" << endl;
    }else if(next(first(L)) == nill){
        p = first(L);
        first(L) = nill;
    }else{
        p = first(L);
        first(L) = next(p);
        next(p) = nill;
    }
}

void printList(List L){
    address p;
    int i;
    if(first(L) == nill){
        cout << "list kosong";
    }else{
        i = 1;
        p = first(L);
        while(p != nill){
            cout << i << ". ";
            cout << "Nama Pasien: " << info(p).nama << endl;
            cout << "NIK Pasien: "<< info(p).nik << endl;
            cout << "Umur: " << info(p).umur << endl;
            cout << "Keluhan: " << info(p).keluhan << endl << endl;
            p = next(p);
            i++;
        }
    }
}

void deleteLast(List &L){
    address p,q;
    if(first(L) == nill){
        p = nill;
        cout << "list kosong";
    }else if(next(first(L)) == nill){
        p = first(L);
        first(L) = nill;
    }else{
        q = first(L);
        p = first(L);
        while(next(p) != nill){
            q = p;
            p = next(p);
        }
        next(q) = nill;
    }
}



