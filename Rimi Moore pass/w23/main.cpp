#include <iostream>
using namespace std;

/*
23. Определить, являются ли значения целочисленных переменных М и N кратными
трем. Если оба кратны трем, то вычислить их сумму, иначе вычислить их
произведение.
 */

int main()
{
    int M, N;

    // Вводим значения переменных M и N
    cout << "Enter the value of variable M: ";
    cin >> M;

    cout << "Enter the value of variable N: ";
    cin >> N;

    // Определяем, являются ли значения M и N кратными трем
    bool is_m_multiple_of_3 = (M % 3 == 0);
    bool is_n_multiple_of_3 = (N % 3 == 0);

    // Вычисляем сумму или произведение в зависимости от результата
    if (is_m_multiple_of_3 && is_n_multiple_of_3) {
        int sum = M + N;
        cout << "Both numbers are multiples of 3. Their sum is " << sum << endl;
    } else {
        int product = M * N;
        cout << "Both numbers are not multiples of 3. Their product is " << product << endl;
    }

    return 0;
}