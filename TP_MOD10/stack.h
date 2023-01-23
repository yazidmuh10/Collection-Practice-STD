#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;
/*
#define Top(S) (S).top
#define info(S) (S).info
*/
typedef char infotype;

struct stack_arr{
     int top;
     infotype info[15];
};

void createStack_1303213026(stack_arr&S);
bool isEmpty_1303213026(stack_arr S);
bool isFull_1303213026(stack_arr S);
void push_1303213026(stack_arr &S, infotype x);
void pop_1303213026(stack_arr &S,infotype &x);
void printInfo_1303213026(stack_arr &S);


#endif // STACK_H_INCLUDED
