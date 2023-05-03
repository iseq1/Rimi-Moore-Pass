#include <iostream>
#include <string>

using namespace std;

/*
18. Найти два наименьших числа, которые начинаются на 5 и из которых, перенеся
первую цифру в конец, можно получить новое число, в 5 раз меньшее, чем
искомое.
 */


int main() {
    int num1 = 0, num2 = 0;
    for (int x = 500; x <= 600000; x++) {
        string str = to_string(x);
        char first = str[0];
        str.erase(str.begin());
        str += first;
        int y = stoi(str);
        if (y == x / 5) {
            if (num1 == 0) {
                num1 = x;
            } else {
                num2 = x;
                break;
            }
        }
    }
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    return 0;
}