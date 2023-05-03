#include <iostream>
#include <cstdlib>
using namespace std;

/*
9 Дана действительная матрица размера n x m, в которой не все элементы равны
нулю. Получить новую матрицу путем деления всех элементов данной матрицы на
ее наибольший по модулю элемент.
 */

int main() {
    int ROWS,COLS;
    cout<<"Enter the dimension of the matrix NxM:"<<endl;
    cin>>ROWS; cin>>COLS;

    double **matrix = new double*[ROWS];
    for(int k = 0; k < ROWS; k++)
        matrix[k] = new double[COLS];

    // ввод матрицы
    cout << "Enter Matrix Elements:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Source Matrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // поиск наибольшего значения по модулю
    int maxAbsValue = abs(matrix[0][0]);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int absValue = abs(matrix[i][j]);
            if (absValue > maxAbsValue) {
                maxAbsValue = absValue;
            }
        }
    }

    cout<<"\n Greatest modulo element: "<<maxAbsValue<<endl;

    // деление всех элементов на наибольший элемент по модулю
    if (maxAbsValue != 0) { // если матрица не состоит только из нулей
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                matrix[i][j] /= maxAbsValue;
            }
        }
    }

    // вывод новой матрицы
    cout << "New Matrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for(int k = 0; k < ROWS; k++)
        delete [] matrix[k];
    delete [] matrix;


    return 0;
}