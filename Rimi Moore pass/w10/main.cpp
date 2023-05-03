#include <iostream>
#include <cstdlib>
using namespace std;

/*
10 Дана матрица действительных чисел размером n x m. Найти среднее
арифметическое элементов матрицы, расположенных на главной диагонали.
Увеличить каждый элемент матрицы на соответствующую величину.
 */

int main() {
    int n,m;
    cout<<"Enter the dimension of the matrix NxM:"<<endl;
    cin>>n; cin>>m;

    double **matrix = new double*[n];
    for(int k = 0; k < n; k++)
        matrix[k] = new double[m];

    // ввод матрицы
    cout << "Enter Matrix Elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Source matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    // Находим среднее арифметическое элементов, расположенных на главной диагонали матрицы
    double average = 0;
    for (int i = 0; i < n; i++) {
        average += matrix[i][i];
    }
    average /= n;
    cout<<"\n Arithmetic mean of the main diagonal:"<<average<<endl;

    // Увеличиваем каждый элемент матрицы на среднее арифметическое значений на главной диагонали
    for (int i = 0; i < n; i++) {
        for(int j=0;j<m;j++)
            matrix[i][j] += average;
    }

    // Выводим результат на экран
    cout << "The resulting matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}