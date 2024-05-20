#include <iostream>
using namespace std;

int main() {
    int A;
    setlocale(LC_ALL, "Russian");
    cout << "Введите целое число A: ";
    cin >> A;

    bool B = (A % 3 != 0) && (A % 10 == 0);
    cout <<boolalpha<< "Число не кратно 3 и оканчивается нулем: " << B << endl;

    return 0;
}

