#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, h;
    setlocale(LC_ALL, "RU");
    cout << "Введите длину стороны a правильного треугольника:" << endl;

    cin >> a;

    h = (sqrt(3) / 2) * a;

    cout << "Высота правильного треугольника h равна " << h << endl;

    return 0;
}
