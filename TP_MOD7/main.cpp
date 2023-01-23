#include "DLL.h"

int main()
{
    List L;
    address P;
    int pilihan,premi, nilai_barang,n=0,i=0;
    double rata;
    string nama,telpon,tipe_barang;
    char lanjut;

    pilihan = selectMenu_1303213026();
    while(pilihan != 0){
        if (pilihan == 1){
                cout << endl;
                cout << "---------------- INPUT Barang ----------------"<< endl;
                cout << "Banyak data barang yang akan dimasukan: ";
                cin >> n;

                createList_1303213026(L);

                while(i < n){
                    cout << "------- Nama - Nomor telpon - Tipe barang - Premi - Nilai barang -------" << endl;
                    cout << "Masukan data baru: ";
                    cin >> nama >>  telpon >> tipe_barang >> premi >> nilai_barang;
                    cout << endl;

                    createNewElement_1303213026(nama,telpon,tipe_barang,premi,nilai_barang, P);
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
        }else if(pilihan == 2){
                cout << "---------------------- Show Data Nasabah Asuransi ----------------------" << endl;

                showAllData_1303213026(L,P);

                cout << "Kembali ke menu utama? (Y/N):";
                cin >> lanjut;
                if(lanjut == 'Y'){
                    pilihan = selectMenu_1303213026();
                }else{
                     pilihan = 0;
                }
        }else if(pilihan == 3){
            reverseList_1303213026(L,P);
            showAllData_1303213026(L,P);
            cout << "list sudah di reverse" << endl << endl;

            cout << "Kembali ke menu utama? (Y/N):";
            cin >> lanjut;
            if(lanjut == 'Y'){
                pilihan = selectMenu_1303213026();
            }else{
                pilihan = 0;

            }
        }else if(pilihan == 4){
            cout << "---------------------- Rata Rata Premi ----------------------" << endl;
            rata = average_1303213026(L);
            cout << "Rata rata premi nasabah: " << rata << endl;
            cout << "Kembali ke menu utama? (Y/N):";
            cin >> lanjut;
            if(lanjut == 'Y'){
                pilihan = selectMenu_1303213026();
            }else{
                pilihan = 0;
            }
    }
    }
    cout << "PROGRAM SELESAI" << endl;
    return 0;
}
