#include "member.h"

void inputData_1303213026(member &MB){
    cout << "Tuliskan IDNumber : ";
    cin >> MB.IDNumber;
    int k = 1;
    for(int i=0;i<n;i++){
        cout << "Point ke- " << k << " : ";
        cin >> MB.Poin[i];
        k++;
    }
};

double ratarata_1303213026(member &MB){
    double hasil,z;
    for(int i=0;i<n;i++){
        z = z + MB.Poin[i];
    }
    hasil = z/n;
    return hasil;
}

void showData_1303213026(member &MB){
    cout << "ID Number " << MB.IDNumber << endl;
    cout << "Poin : ";
    for(int j=0;j<n;j++){
        cout << MB.Poin[j] << " ";
    }
    cout << endl;
}
