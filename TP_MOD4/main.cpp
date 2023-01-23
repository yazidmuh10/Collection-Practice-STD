#include "listpasien.h"

int main()
{
    List L;
    address P;
    infotype pas;

    createList(L);
    //printList(L);

    pas = newPasien("Yura","32002839720",30,"Deman tinggi");
    P = newElement(pas);
    insertFirst(L,P);

    pas = newPasien("Niko","32002834798",105,"Flu");
    P = newElement(pas);
    insertFirst(L,P);

    pas = newPasien("Adinda","32002835677",67,"ginjal");
    P = newElement(pas);
    insertFirst(L,P);

    printList(L);

    //delete last
    cout <<"---------------- delete first ------------------" << endl;
    printList(L);
    deleteFirst(L);
    cout << "Terdelete First: " << endl;
    printList(L);


    cout <<"---------------- delete last ------------------" << endl;
    printList(L);
    deleteLast(L);
    cout << "Terdelete Last: " << endl;
    printList(L);
    return 0;
}
