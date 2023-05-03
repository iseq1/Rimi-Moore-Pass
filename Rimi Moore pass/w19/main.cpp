#include <iostream>
using namespace std;

/*
19. Найти среднее арифметическое положительных элементов каждого столбца
матрицы A(n, m), заданной целыми числами.
 */

int main()
{
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

    // Вычисляем среднее арифметическое положительных элементов каждого столбца
    for (int j = 0; j < m; j++) {
        int sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (matrix[i][j] > 0) {
                sum += matrix[i][j];
                count++;
            }
        }

        if (count > 0) {
            cout << "Arithmetic mean of positive column elements " << j+1 << " = " << (double)sum / count << endl;
        } else {
            cout << "There are no positive elements in column " << j+1 << "." << endl;
        }
    }

    return 0;
}
