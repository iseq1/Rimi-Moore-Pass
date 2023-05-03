#include <iostream>
using namespace std;

/*
25. Число делится на 11, если разность между суммой цифр, стоящих на нечетных
местах, кратна 11. Проверить этот признак для всех натуральных чисел, значение
которых не превосходит заданного m, и показать числа, кратные 11.
 */

int main() {
    int m;
    cout << "Enter m value: ";
    cin >> m;

    for (int i = 1; i <= m; i++) {
        int sum_odd_digits = 0;
        int num = i;

        // Считаем сумму цифр, стоящих на нечетных местах
        while (num > 0) {
            int digit = num % 10;
            sum_odd_digits += digit;
            num /= 100;
        }

        if (abs(sum_odd_digits - (i / 10 % 10 + i / 1000 % 10)) % 11 == 0) {
            cout << i << " is multiple of 11" << endl;
        }
    }

    return 0;
}
