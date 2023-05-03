#include <iostream>
#include <iomanip>
using namespace std;

/*
4 Создать программу, которая читает с клавиатуры двухбайтовое беззнаковое целое
число и распечатывает на экране ASCII-символ, соответствующий этому числу, а
также само число в десятеричной и шестнадцатиричной системах счисления. Число
в шестнадцатеричной системе счислении дополняется постфиксом “h”.
 */

int main() {
    unsigned short num;
    cout << "Enter a two-byte unsigned integer: ";
    cin >> num;

    cout << "ASCII-character: " << (char) num << endl;
    cout << "Decimal number: " << dec << num << endl;
    cout << "Hexadecimal number: " << hex << num << "h" << endl;
}