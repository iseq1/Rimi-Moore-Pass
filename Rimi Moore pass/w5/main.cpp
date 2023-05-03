#include <iostream>
using namespace std;

/*
5. Напишите однофайловую программу (с именем main.cpp), которая получает два
отдельных целых числа от пользователя, выполняет сложение этих чисел, а затем
выводит результат. В программе должно быть три функции:
    a. Функция «readNumber», которая запрашивает в пользователя одно целое
        число, затем возвращает его в main.
    b. Функция «writeAnswer», которая выводит результат в консоль. Она должна
        быть без возвращаемого значения и принимать только один параметр.
    c. Функция main(), которая соединяет две вышеуказанные функции вместе

 */


// Функция readNumber запрашивает у пользователя одно целое число и возвращает его
int readNumber()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    return num;
}

// Функция writeAnswer выводит результат на экран
void writeAnswer(int result)
{
    cout << "Addition result: " << result << endl;
}

// Главная функция main объединяет две вышеуказанные функции
int main()
{
    int num1 = readNumber();
    int num2 = readNumber();

    int sum = num1 + num2;

    writeAnswer(sum);

    return 0;
}