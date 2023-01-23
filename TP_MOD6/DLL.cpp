#include "DLL.h"

void createList_1303213026(List &L){
    first(L) = NIL;
    last(L) = NIL;
}
address createNewElement_1303213026(string tipe, string luasBangunan,int luasTanah, int faktur, string harga){
    address P = new element;
    info(P).tipe_rumah = tipe;
    info(P).luas_bangunan = luasBangunan;
    info(P).luas_tanah = luasTanah;
    info(P).ID_faktur = faktur;
    info(P).harga_unit = harga;
    next(P) = NIL;
    return P;
}
void insertFirst_1303213026(List &L, address P){
    if(first(L) == NIL && last(L) == NIL){
        first(L) = P;
    }else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}
void showAllData_1303213026(List L){
    if(first(L) == NIL && last(L) == NIL){
        cout << "List masih kosong" << endl;
    }else{
        address P;
        P = first(L);
        while(P != NIL){
            cout << "ID Faktur Rumah : " << info(P).ID_faktur << endl;
            cout << "Tipe Rumah      : " << info(P).tipe_rumah << endl;
            cout << "Luas Bangunan   : " << info(P).luas_bangunan << " meter" << endl;
            cout << "Luas Tanah      : " << info(P).luas_tanah << " m2" << endl;
            cout << "Harga Unit Rumah: Rp" << info(P).harga_unit << endl << endl;
            P = next(P);
        }
    }
}

int jumlahData_1303213026(List L){
    int sum = 0;
    address P;
    P = first(L);
    while(P != NIL){
        sum = sum + 1;
        P = next(P);
    }
    return sum;
};

int selectMenu_1303213026(){
    cout << endl << endl;
    cout << "------------------- MENU RUMAH -------------------" << endl;
    cout << "1. Mengisi data Rumah" << endl;
    cout << "2. Show list rumah"<< endl;
    cout << "3. Jumlah data penjualan" << endl;
    cout << "0. Exit" << endl << endl;
    cout << "Pilih menu: ";
    int input = 0;
    cin >> input;
    return input;
}
