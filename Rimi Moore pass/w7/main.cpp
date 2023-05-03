#include <iostream>
#include <climits> // для INT_MIN и INT_MAX

/*
7 Дана действительная матрица размера 6 x 7. Найти среднее арифметическое
наибольшего и наименьшего значений ее элементов.
 */

using namespace std;

int main() {
    const int ROWS = 6;
    const int COLS = 7;
    double matrix[ROWS][COLS];

    // ввод матрицы
    cout << "Enter Matrix Elements:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> matrix[i][j];
        }
    }

    // поиск минимального и максимального элемента в матрице
    double minValue = INT_MAX;
    double maxValue = INT_MIN;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] < minValue) {
                minValue = matrix[i][j];
            }
            if (matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
            }
        }
    }

    // вычисление среднего арифметического
    double avg = (minValue + maxValue) / 2.0;

    // вывод результата
    cout << "Minimum value: " << minValue << endl;
    cout << "Maximum value: " << maxValue << endl;
    cout << "Arithmetic mean of the largest and smallest values: " << avg << endl;

    return 0;
}
