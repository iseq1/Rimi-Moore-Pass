#include <iostream>
#include <cstdlib>
using namespace std;

/*
11 Дана матрица действительных чисел размером n x m. Найти суммы элементов
матрицы, расположенных параллельно главной диагонали.
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

    // Находим суммы элементов, расположенных параллельно главной диагонали матрицы
    double* diag_sums= new double[n+m-1];
    for(int i=0;i<n+m-1;i++)
        diag_sums[i]=0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int diag_index = i - j + m - 1;
            diag_sums[diag_index] += matrix[i][j];
        }
    }

    cout << "\nSums of elements on parallel diagonals(top down):\n";
    for (int i = 0; i < n + m - 1; i++) {
        cout << diag_sums[i] << " ";
    }
    cout << endl;




    return 0;
}