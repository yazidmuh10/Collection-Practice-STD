#include "hello.h"

int main()
{
    cout << "Test prosedure Greeting" << endl;
    string name = "Hafiz Yazid Muhammad";
    string id = "1303213026";
    greetings_1303213026(name,id);
    cout << "please  answer Question 1" << endl << endl;

    cout << "Test procedure swap_1 and swap_2" << endl;
    int a = 15;
    int b = 30;
    int c = 75;
    swap_1_1303213026(a,b,c);
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    a = 15;
    b = 30;
    c = 75;
    swap_2_1303213026(a,b,c);
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "Please answer Question 2 "<< endl << endl;

    cout << "Test procedure confused" << endl;
    confused_1303213026();
    cout << "please answer Question 3" << endl << endl;

    cout << "Test procedure remove inside" << endl;
    remove_inside_1303213026(5);
    cout << "please answer Question 4"<< endl << endl;

    cout << "Test procedure indexing" << endl;
    cout << "example 1 : " << indexing_1303213026(70,75,60) << endl;
    cout << "example 2 : " << indexing_1303213026(45,70,50) << endl;
    cout << "example 3 : " << indexing_1303213026(75,80,82) << endl;
    cout << "please answer Question 5 " << endl << endl;

    return 0;
}
