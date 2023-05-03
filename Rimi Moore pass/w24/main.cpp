#include <iostream>
#include <string>
using namespace std;

/*
24.  Числа, которые можно одинаково прочитать слева направо и справа налево,
называются палиндромами. Например, 21312,52325,4224. Проверить, является ли
заданное число палиндромом
 */

int main()
{
    int number;

    // Вводим число
    cout << "Enter the number: ";
    cin >> number;

    // Преобразуем число в строку
    string number_str = to_string(number);

    // Проверяем, является ли число палиндромом
    bool is_palindrome = true;
    for (int i = 0; i < number_str.length() / 2; i++) {
        if (number_str[i] != number_str[number_str.length() - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    // Выводим результат
    if (is_palindrome) {
        cout << number << " is a palindrome" << endl;
    } else {
        cout << number << " is not a palindrome" << endl;
    }

    return 0;
}