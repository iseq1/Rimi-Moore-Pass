#include <iostream>
using namespace std;

/*
20. Натуральное число называется совершенным, если оно равно сумме всех своих
простых делителей, например, 6 = 1 + 2 + 3. Найти все совершенные числа в
заданном интервале.
 */

// Функция для определения, является ли число совершенным
bool is_perfect_number(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main()
{
    int start, end;

    // Вводим диапазон
    cout << "Enter start of range: ";
    cin >> start;

    cout << "Enter the end of the range: ";
    cin >> end;

    // Ищем совершенные числа в заданном диапазоне и выводим их
    cout << "Perfect numbers in the range [" << start << ", " << end << "]: ";

    for (int i = start; i <= end; i++) {
        if (is_perfect_number(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
