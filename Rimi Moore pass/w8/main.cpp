#include <iostream>
#include <string>
using namespace std;

/*
8 Дан текст, в начале которого имеются пробелы и в котором имеются цифры. Найти
порядковый номер максимальной цифры. Если максимальных цифр несколько, то
следует определить номер первой из них.

Вводить(пример): Today we have great statistics: 89% of all of us have money to celebrate our birthday.
 */

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    int maxDigit = -1; // значение максимальной цифры
    int maxDigitIndex = -1; // индекс (номер) максимальной цифры
    for (int i = 0; i < text.length(); i++) {
        if (isdigit(text[i])) { // если символ является цифрой
            int digit = text[i] - '0'; // получаем значение цифры
            if (digit > maxDigit) { // если значение цифры больше, чем максимальное значение
                maxDigit = digit; // обновляем максимальное значение
                maxDigitIndex = i; // запоминаем индекс (номер) максимальной цифры
            }
        }
    }

    if (maxDigitIndex == -1) { // если в тексте не было цифр
        cout << "Numbers in text not found.\n";
    } else {
        cout << "Maximum figure: " << maxDigit << endl;
        cout << "Ordinal number (index) of the maximum digit: " << maxDigitIndex + 1 << endl;
    }

    return 0;
}