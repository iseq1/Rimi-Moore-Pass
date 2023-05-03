#include <iostream>
using namespace std;

/*
16. Известно, что разность любого натурального числа и суммы его цифр кратна 9.
Проверить этот факт для чисел в заданном интервале.
 */

int sum_of_digits(int number)
{
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{
    int start, end;

    cout << "Enter first number of interval: ";
    cin >> start;

    cout << "Enter end number of interval: ";
    cin >> end;

    bool flag = true;

    for (int i = start; i <= end; i++) {
        int difference = i - sum_of_digits(i);
        if (difference % 9 != 0) {
            cout << "The number " << i << " does not match the condition." << endl;
            flag = false;
        }
    }

    if(flag){
        cout<<"There were no numbers that did not satisfy the condition!" ;
    }

    return 0;
}