#include "flight.h"

int main()
{
    ListJadwal L;
    string dari,ke,date;
    createListJadwal_1303213026(L);
    infotype D;
    bool Pencarian_jadwal;
    adr_jadwalP P;
    int i = 0,n,kapasitas;

    cout << "N input: ";
    cin >> n;
    cout << "--------------------------Masukan--------------------------" << endl;
    while(i < n){
        cin.ignore();
        cout << "Kode: ";
        getline(cin, D.Kode);
        cout << "Jenis: ";
        getline(cin, D.Jenis);
        cout << "Tanggal: ";
        getline(cin,D.Tanggal);
        cout << "Waktu: ";
        getline(cin,D.Waktu);
        cout << "Asal: ";
        getline(cin,D.Asal);
        cout << "Tujuan: ";
        getline(cin,D.Tujuan);
        cout << "Kapasitas: ";
        cin >> D.Kapasitas;
        cout << endl;
        P = createElemenJadwal_1303213026(D);
        insertLastJ_1303213026(L,P);
        i++;
    }
    cin.ignore();

    cout << "--------------------------Penerbangan--------------------------" << endl;
    showJadwal_1303213026(L);

    cout << "--------------------------Delete First--------------------------" << endl;
    DeleteFirst_1303213026(L,P);
    showJadwal_1303213026(L);

    cout << "--------------------------Search--------------------------" << endl;
    cout << "Dari: ";
    getline(cin,dari);
    cout << "Ke: ";
    getline(cin,ke);
    cout << "Tanggal: ";
    getline(cin,date);
    Pencarian_jadwal = SearchJ_1303213026(L,dari,ke,date);

    string bro;
    if(Pencarian_jadwal){
        bro = "True";
    }else{
        bro = "false";
    }
    cout << "Jadwal di temukan : " << bro << endl;
    return 0;
}
