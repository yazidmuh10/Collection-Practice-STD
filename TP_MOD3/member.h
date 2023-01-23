#ifndef MEMBER_H_INCLUDED
#define MEMBER_H_INCLUDED

#include<iostream>
#include <cstdlib>

using namespace std;

const int n = 6;

struct member{
    string IDNumber;
    double Poin[n];
};

void inputData_1303213026(member &MB);
double ratarata_1303213026(member &MB);
void showData_1303213026(member &MB);
#endif // MEMBER_H_INCLUDED
