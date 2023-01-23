#include "stack.h"

void createStack_1303213026(stack_arr &S){
    S.top = 0;
}
bool isEmpty_1303213026(stack_arr S){
    if(S.top == 0){
        return true;
    }else{
        return false;
    }
}
bool isFull_1303213026(stack_arr S){
    if(S.top == 15){
        return true;
    }else{
        return false;
    }
}
void push_1303213026(stack_arr &S, infotype x){
    if(isEmpty_1303213026(S)){
        S.top = 1;
        S.info[S.top] = x;
    }else if(isFull_1303213026(S)){
        cout << "Stack penuh" << endl;
    }else{
        S.top = S.top +1;
        S.info[S.top] = x;
    }
}
void pop_1303213026(stack_arr &S,infotype &x){
    if(isEmpty_1303213026(S)){
        cout << "Stack Kosong" << endl;
    }else{
        x= S.info[S.top];
        S.top--;
    }
}
void printInfo_1303213026(stack_arr &S){
    infotype x;
    int i, j = 1;
    if(isEmpty_1303213026(S)){
        cout << "Stack Masih Kosong" << endl;
    }else{
        for(i = S.top; i > 0; i--){
            cout << S.info[j++] << " ";
        }
    }
    cout << endl;
}
