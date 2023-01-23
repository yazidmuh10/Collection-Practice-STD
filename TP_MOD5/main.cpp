#include "menu.h"

int main()
{
    int n,pilihan = 0,i = 0;
    List L;
    adr P;
    char C, lanjut;
    createList_1303213026(L);
    string kata;

    pilihan = selectMenu_1303213026();
    while(pilihan != 0){
        switch(pilihan){
        case 1:
            {
                cout << endl;
                cout << "Banyak jumlah kata yang akan dimasukan: ";
                cin >> n;
                while (i < n){
                    cout << "Input nama pengunjung: ";
                    cin >> kata;
                    P = newElement_1303213026(kata);
                    insertLast_1303213026(L,P);
                    i++;
                }
                cout << "Kembali ke menu utama? (Y/N):";
                cin >> lanjut;
                if(lanjut == 'Y'){
                    pilihan = selectMenu_1303213026();
                }else{
                    pilihan = 0;
                }
                cout << endl;
            }
            break;
        case 2:
            {
                P = longestName_1303213026(L);
                cout << "Nama Terpanjang: " << info(P) << endl;
                cout << "Kembali ke menu utama? (Y/N):";
                cin >> lanjut;
                if(lanjut == 'Y'){
                    pilihan = selectMenu_1303213026();
                }else{
                    pilihan = 0;
                }
                cout << endl;
            }
            break;
        case 3:
            {
                cout << "Pilih karakter pertama: ";
                cin >> C;
                cout << "Pilih banyak pengunjung: ";
                cin >> n;
                showFirstKNameC_1303213026(L,n,C);
                cout << "Kembali ke menu utama? (Y/N):";
                cin >> lanjut;
                if(lanjut != 'Y'){
                    pilihan = 0;
                }else{
                    pilihan = selectMenu_1303213026();
                }
                cout << endl;
            }
            break;
        case 4:
            {
                cout << "List pengunjung: ";
                showAll_1303213026(L);
                cout << "Kembali ke menu utama? (Y/N):";
                cin >> lanjut;
                if(lanjut == 'Y'){
                    pilihan = selectMenu_1303213026();
                }else{
                    pilihan = 0;
                }
            }
            break;
        }
    }
    cout << "PROGRAM SELESAI" << endl;
}
