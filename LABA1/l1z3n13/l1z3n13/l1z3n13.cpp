#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    setlocale(LC_ALL, "RU");
    cout << "Введите координату точки A: ";
    cin >> A;
    cout << "Введите координату точки B: ";
    cin >> B;
    cout << "Введите координату точки C (между A и B): ";
    cin >> C;

    double r = (C - A) * (B - C);

    cout << "Произведение длин отрезков AC и BC: " << r << endl;

    return 0;
}
