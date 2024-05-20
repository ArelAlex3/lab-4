#include <iostream>
using namespace std; //fixed it std

int main()
{
    int a, b, c; //add a

    setlocale(LC_ALL, "ru");
    cout << "Введите целое число A: ";
    cin >> a;
    cout << "Введите целое число B: ";
    cin >> b;
    cout << "Введите целое число C: ";
    cin >> c;

    bool n = (a > 0);
    bool n1 = (b > 0); // add n1
    bool n2 = (c > 0); //correct bool

    bool sum = (n + n1 + n2 == 2);

    if (sum) { // correct sum
        cout << "Ровно два из чисел A, B, C являются положительными." << endl;
    }
    else {
        cout << "Условие не выполняется." << endl;
    }

    return 0;
}