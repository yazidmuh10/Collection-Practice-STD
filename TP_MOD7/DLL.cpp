#include "DLL.h"

void createList_1303213026(List &L){
    first(L) = NIL;
    last(L) = NIL;
}

void createNewElement_1303213026(string nama, string telpon, string jenis_barang,int premi, int nilai_barang, address &P){
     P = new element;
     info(P).nama = nama;
     info(P).no_telpon = telpon;
     info(P).tipe_barang = jenis_barang;
     info(P).premi = premi;
     info(P).value_barang = nilai_barang;

     next(P) = NIL;
     prev(P) = NIL;
}

void insertFirst_1303213026(List &L, address P){
    if(first(L) == NIL && last(L) == NIL){
        first(L) = P;
        last(L) = P;
    }else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void showAllData_1303213026(List L, address &P){
    if(first(L) != NIL && last(L) != NIL){
        if (P == first(L)){
            while(P != NIL){
            cout << "Nama            : " << info(P).nama << endl;
            cout << "No Telpon       : " << info(P).no_telpon << endl;
            cout << "Tipe Barang     : " << info(P).tipe_barang << endl;
            cout << "Premi Asuransi  : Rp " << info(P).premi << " /Tahun" << endl;
            cout << "Luas Tanah      : Rp " << info(P).value_barang << endl << endl;
            P = next(P);
            }
        }else if(P == last(L)){
            while(P != NIL){
            cout << "Nama            : " << info(P).nama << endl;
            cout << "No Telpon       : " << info(P).no_telpon << endl;
            cout << "Tipe Barang     : " << info(P).tipe_barang << endl;
            cout << "Premi Asuransi  : Rp " << info(P).premi << " /Tahun" << endl;
            cout << "Luas Tanah      : Rp " << info(P).value_barang << endl << endl;
            P = prev(P);
            }
        }

    }else{
        cout << "List Kosong" << endl;
    }
    cout << endl;
}

void reverseList_1303213026(List L,address &P){
    if(P == first(L)){
        P = last(L);
    }else{
        P = first(L);
    }
}

double average_1303213026(List L){
    double sum,n= 0,hasil = 0;
    address P;
    P = first(L);
    sum = 0;
    while(P != NIL){
        sum += info(P).premi;
        n++;
        P = next(P);
    }
    hasil = sum/n;
    return hasil;
}

int selectMenu_1303213026(){
    cout << endl << endl;
    cout << "------------------- MENU ASURANSI BARANG -------------------" << endl;
    cout << "1. Mengisi N data nasabah asuransi" << endl;
    cout << "2. Show list data nasabah"<< endl;
    cout << "3. membalik list" << endl;
    cout << "4. Rata rata premi asuransi" << endl;
    cout << "0. Exit" << endl << endl;
    cout << "Pilih menu: ";
    int input = 0;
    cin >> input;
    return input;
}
