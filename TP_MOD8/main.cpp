#include "CSLL.h"

int main()
{
    ListLagu L;
    infotype lagu;
    address P;
    create_List_1303213026(L);
    int i = 1,N = 7;

    cout << "------------- Masukan List Lagu-------------" << endl;
    while(i <= N){
        cout << "Data ke - " << i << endl;
        cout << "artis: ";
        cin >> lagu.Artis;
        cout <<  "judul: ";
        cin >> lagu.Judul;
        cout << "genre: ";
        cin >> lagu.Genre;
        cout << "play time: ";
        cin >> lagu.playtime;
        create_Element_1303213026(lagu, P);
        insertLast_1303213026(L,P);
        cout << endl;
        i++;
    }
    cout << "--------------Show Data ----------------" << endl;
    showAll_1303213026(L);

    //hapus list lagu pertama
    deleteFirst_1303213026(L,P);

    //show list lagu (2) untuk delete
    cout << "--------------Show Data Setelah Delete First ----------------" << endl;
    showAll_1303213026(L);

    cout << "PROGRAM SELESAI" << endl;
    return 0;
}
