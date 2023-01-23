#include "DLL.h"

int main()
{
    List L;
    address P;
    int pilihan, id_faktur, i = 1, n = 0, luas_tanah = 0;
    string tipe_rumah, harga, luas_bangunan;
    char lanjut;

    createList_1303213026(L);
    pilihan = selectMenu_1303213026();

    while(pilihan != 0){
        switch(pilihan){
        case 1:
            {
                cout << endl;
                cout << "---------------- INPUT RUMAH ----------------"<< endl;
                cout << "Banyak data rumah yang akan dimasukan: ";
                cin >> n;
                while (i <= n){
                    cout << "Masukan id faktur: ";
                    cin >> id_faktur;
                    cout << "Masukan tipe rumah: ";
                    cin >> tipe_rumah;
                    cout << "Masukan luas tanah: ";
                    cin >> luas_tanah;
                    cout << "Masukan luas bangunan: ";
                    cin >> luas_bangunan;
                    cout << "Harga unit rumah: ";
                    cin >> harga;
                    cout << endl;
                    P = createNewElement_1303213026(tipe_rumah,luas_bangunan,luas_tanah,id_faktur,harga);
                    insertFirst_1303213026(L,P);
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
                cout << "---------------- Show List Rumah ----------------" << endl;
                showAllData_1303213026(L);
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
                cout << "---------------- Banyak List Rumah ----------------" << endl;
                cout << "Jumlah banyak data list: ";
                cout << jumlahData_1303213026(L) << endl;
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
    return 0;
}
