#include <iostream>
using namespace std;

/*
6 В заданном интервале найти все натуральные числа, равные кубу суммы своих
цифр.
 */

// Функция, которая вычисляет куб суммы цифр числа и проверяет, равно ли оно ему
bool hasCubicSum(int num)
{
    int sum = 0;
    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit*digit*digit;
        temp /= 10;
    }

    return (sum == num);
}


// Функция, которая перебирает натуральные числа в заданном интервале и выводит те, которые равны кубу суммы своих цифр
void findCubicSums(int start, int end)
{
    for (int i = start; i <= end; i++) {
        if (hasCubicSum(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int start, end;
    cout << "Enter the beginning and end of the interval: ";
    cin >> start >> end;

    cout << "Numbers equal to the cube of the sum of their digits in the interval from " << start << " to " << end << ":\n";
    findCubicSums(start, end);

    return 0;
}
