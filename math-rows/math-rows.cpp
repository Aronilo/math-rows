#include <iostream>
#include <locale>

using namespace std;

int main()
{
    float x;
    setlocale(LC_ALL, "RUS");

    cout << "Введите значение аргумента функции:";
    cin >> x;

    double Sum = x, q = x, eps = 0.0001f;
    int n = 2;

    while (true)
    {
        q *= (-1) * x * ((3*n)-4) / (3*n);

        Sum += q;   
        n++;

        if (abs(q)  < eps)
            break;

    }
    double f = 3.0 * pow(1.0 + x, 1.0 / 3.0) - 3.0;
    cout << "\nСумма ряда= " << Sum << " Значение функции " << f ;
}
 