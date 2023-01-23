#include "stack.h"

int main()
{
    infotype ch;
    stack_arr S,S1;
    int i=0;
    createStack_1303213026(S);
    cout << "=====Masukan char=====" << endl;
    while(i < 11){
        cin >> ch;
        push_1303213026(S,ch);
        i++;
    }
    cout << "======Output======" << endl;
    printInfo_1303213026(S);
    //OUTPUT SELANJUTNYA
    createStack_1303213026(S1);
    for(i=0; i < 4; i++){
        pop_1303213026(S,ch);
        push_1303213026(S1,ch);
    }
    i = 0;
    while(i < 4){
        pop_1303213026(S1,ch);
        cout << ch << " ";
        i++;
    }
    cout <<  endl;
    cout << "PROGRAM SELESAI" << endl;

    return 0;
}
