#include "queue.h"

int main()
{
    playlistLagu Q;
    address P;
    createQueue_1303213026(Q);
    string artis,judul;
    int i = 0;
    while(i < 7){
        cout << "Artis: ";
        cin >> artis;
        cout << "Judul: ";
        cin >> judul;
        P = createElement_1303213026(artis, judul);
        enqueue_1303213026(Q,P);
        i++;
    }
    cout << "=============OUTPUT============" << endl;
    showSemuaLagu_1303213026(Q);

    cout << "--------Dequeue elemen Pertma-------" << endl;
    dequeue_1303213026(Q,P);
    showSemuaLagu_1303213026(Q);

    cout << "--------Dequeue elemen kedua-------" << endl;
    dequeue_1303213026(Q,P);
    showSemuaLagu_1303213026(Q);

    return 0;
}
