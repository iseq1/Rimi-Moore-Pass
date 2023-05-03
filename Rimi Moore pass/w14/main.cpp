#include <iostream>
#include <cmath>
using namespace std;

/*
14. Даны действительные числа а, b, с. Удвоить эти числа, если а >b > с, и заменить их
абсолютными значениями, если это не так.
 */

int main()
{
    double a, b, c;
    cout << "Enter 3 number: "<<endl;
    cin >> a >> b >> c;

    if (a > b && b > c) {
        // Если а > b > c, удваиваем числа
        a *= 2;
        b *= 2;
        c *= 2;
    } else {
        // Иначе, заменяем числа на их абсолютные значения
        a = abs(a);
        b = abs(b);
        c = abs(c);
    }

    // Выводим получившиеся числа на экран
    cout << "Result: " << a << ", " << b << ", " << c << endl;

    return 0;
}
