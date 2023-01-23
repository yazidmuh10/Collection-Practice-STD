#include "menu.h"

void createList_1303213026(List &L){
    first(L) = nil;
}

adr newElement_1303213026(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    return P;
}

void insertLast_1303213026(List &L, adr P){
    adr q;
    if (first(L) == nil){
        next(P) = first(L);
        first(L) = P;
    }else{
        q = first(L);
        while(next(q) != nil){
            q = next(q);
        }
        next(q) = P;
    }
}

void showAll_1303213026(List L){
    if(first(L) != nil){
        adr P = first(L);
        while(P != nil){
            cout << info(P) << ' ';
            P = next(P);
        }
        cout <<  endl;
    }else{
        cout << "List ini kosong" << endl;
    }
}

adr longestName_1303213026(List L){
    adr P = first(L);;
    adr Q = next(P);
    adr Max;
    while(next(P) != nil){
        if(info(P).length() > info(Q).length()){
            Max = P;
        }
        P = next(P);
        Q = next(Q);
    }
    return Max;
}

void showFirstKNameC_1303213026(List L, int k, char c){
    int i = 1;
    adr P = first(L);
    while(i <= k){
        if(info(P)[0] == c){
            cout << "Pengunjung berawalan '" << c << "' ke-"<< i << ": " << info(P) << endl;
            i++;
        }
        P = next(P);
    }
}

int selectMenu_1303213026(){
    cout << endl << endl;
    cout << "------------------- MENU -------------------" << endl;
    cout << "1. Mengisi data List" << endl;
    cout << "2.  Cari nama pengunjung terpanjang "<< endl;
    cout << "3. Cari pengunjung dengan karakter depan" << endl;
    cout << "4. Show Data" << endl;
    cout << "0. Exit" << endl << endl;
    cout << "Pilih menu: ";
    int input = 0;
    cin >> input;

    return input;
}

