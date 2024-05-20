#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int s;
    cout << "Введите количество секунд: ";
    cin >> s;

    int sinh = 3600;
    int sslh = s % sinh;



    cout << "Прошло " << sslh << " секунд с начала последнего часа " << endl;


    return 0;
}
